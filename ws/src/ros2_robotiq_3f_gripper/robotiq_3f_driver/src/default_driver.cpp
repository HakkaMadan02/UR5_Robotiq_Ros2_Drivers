// Copyright (c) 2023 Peter Mitrano
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// * Neither the name of the {copyright_holder} nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#include <robotiq_3f_driver/default_driver.hpp>
#include <robotiq_3f_driver/default_driver_utils.hpp>
#include <robotiq_3f_driver/data_utils.hpp>

#include <rclcpp/rclcpp.hpp>

#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#include <chrono>
#include <cstring>
#include <sstream>
#include <vector>
#include <limits>

// +-----+-------------------------------+-------------------------------+
// |     | Gripper Input Registers      | Gripper Output Registers     |
// +-----+-------------------------------+-------------------------------+
// | Idx | Address | Function            | Address | Function            |
// +-----+---------+---------------------+---------+---------------------+
// |  0  | 0x03E8  | Action Request      | 0x07D0  | Gripper Status      |
// |  1  |         | Gripper Options     |         | Object Detection    |
// |  2  | 0x03E9  | Empty               | 0x07D1  | Fault status        |
// |  3  |         | Finger A Position   |         | Finger A Req Echo   |
// |  4  | 0x03EA  | Finger A Speed      | 0x07D2  | Finger A Position   |
// |  5  |         | Finger A Force      |         | Finger A Current    |
// |  6  | 0x03EB  | Finger B Position   | 0x07D3  | Finger B Req Echo   |
// |  7  |         | Finger B Speed      |         | Finger B Position   |
// |  8  | 0x03EC  | Finger B Force      | 0x07D4  | Finger B Current    |
// |  9  |         | Finger C Position   |         | Finger C Req Echo   |
// | 10  | 0x03ED  | Finger C Speed      | 0x07D5  | Finger C Position   |
// | 11  |         | Finger C Force      |         | Finger C Current    |
// | 12  | 0x03EE  | Scissor Position    | 0x07D6  | Scissor Req Echo    |
// | 13  |         | Scissor Speed       |         | Scissor Position    |
// | 14  | 0x03EF  | Scissor Force       | 0x07D7  | Scissor Current     |
// | 15  |         | Reserved            |         | Reserved            |
// +---------+---------------------+---------+---------------------+

namespace robotiq_3f_driver
{

const auto kLogger = rclcpp::get_logger("DefaultDriver");

// If the gripper connection is not stable we may want to try sending the command again.
constexpr auto kMaxRetries = 5;

constexpr uint16_t kActionRequestRegisterAddress = 0x0000;
//0x03E8
constexpr uint16_t kGripperStatusRegister = 0x0000;
//0x07D0

constexpr size_t kActivateResponseSize = 8;
constexpr size_t kDeactivateResponseSize = 8;
constexpr size_t kNumModBusRegisters = 8;
constexpr size_t kResponseSizeHeaderSize = 5;      // kept for reference / sizing only
constexpr size_t kMbapHeaderSize = 7;               // TransactionID(2) + ProtocolID(2) + Length(2) + UnitID(1)

DefaultDriver::DefaultDriver(std::string ip, uint16_t port) : ip_{ std::move(ip) }, port_{ port }
{
}

bool DefaultDriver::connect()
{
  sockfd_ = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd_ < 0)
  {
    RCLCPP_ERROR(kLogger, "Failed to create socket.");
    return false;
  }

  sockaddr_in server{};
  server.sin_family = AF_INET;
  server.sin_port = htons(port_);
  if (inet_pton(AF_INET, ip_.c_str(), &server.sin_addr) <= 0)
  {
    RCLCPP_ERROR(kLogger, "Invalid IP address: %s", ip_.c_str());
    close(sockfd_);
    sockfd_ = -1;
    return false;
  }

  if (::connect(sockfd_, reinterpret_cast<sockaddr*>(&server), sizeof(server)) < 0)
  {
    RCLCPP_ERROR(kLogger, "Failed to connect to %s:%d", ip_.c_str(), port_);
    close(sockfd_);
    sockfd_ = -1;
    return false;
  }

  RCLCPP_INFO(kLogger, "Connected to gripper at %s:%d", ip_.c_str(), port_);
  return true;
}

void DefaultDriver::disconnect()
{
  if (sockfd_ >= 0)
  {
    close(sockfd_);
    sockfd_ = -1;
  }
}

std::vector<uint8_t> DefaultDriver::send(const std::vector<uint8_t>& pdu, size_t response_size) const
{
  (void)response_size;  // response size is now determined dynamically from the MBAP header

  int retry_count = 0;
  while (retry_count < kMaxRetries)
  {
    uint16_t const tid = transaction_id_++;
    uint16_t const length = static_cast<uint16_t>(pdu.size() + 1);  // +1 for unit ID byte

    std::vector<uint8_t> request;
    request.push_back(static_cast<uint8_t>(tid >> 8));
    request.push_back(static_cast<uint8_t>(tid & 0xFF));
    request.push_back(0x00);  // Protocol ID hi
    request.push_back(0x00);  // Protocol ID lo
    request.push_back(static_cast<uint8_t>(length >> 8));
    request.push_back(static_cast<uint8_t>(length & 0xFF));
    request.push_back(slave_address_);  // Unit ID
    request.insert(request.end(), pdu.begin(), pdu.end());

    try
    {
      auto const t0 = std::chrono::high_resolution_clock::now();

      ssize_t written = write(sockfd_, request.data(), request.size());
      if (written < 0 || static_cast<size_t>(written) != request.size())
      {
        throw std::runtime_error("Incomplete write to socket");
      }

      std::vector<uint8_t> header(kMbapHeaderSize);
      ssize_t r = read(sockfd_, header.data(), kMbapHeaderSize);
      if (r != static_cast<ssize_t>(kMbapHeaderSize))
      {
        throw std::runtime_error("Failed to read MBAP header");
      }

      uint16_t const resp_length = static_cast<uint16_t>((header[4] << 8) | header[5]);
      uint16_t const remaining = resp_length - 1;  // unit ID byte already included in header read

      std::vector<uint8_t> pdu_response(remaining);
      ssize_t r2 = read(sockfd_, pdu_response.data(), remaining);
      if (r2 != static_cast<ssize_t>(remaining))
      {
        throw std::runtime_error("Failed to read full PDU response");
      }

      auto const t1 = std::chrono::high_resolution_clock::now();
      auto const dt = std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count();
      RCLCPP_DEBUG_STREAM(kLogger, "tcp round-trip dt: " << dt << " us");

      std::vector<uint8_t> full_response;
      full_response.insert(full_response.end(), header.begin(), header.end());
      full_response.insert(full_response.end(), pdu_response.begin(), pdu_response.end());
      return full_response;
    }
    catch (const std::exception& e)
    {
      RCLCPP_DEBUG(kLogger, "Resending the command because the previous attempt (%d of %d) failed: %s",
                   retry_count + 1, kMaxRetries, e.what());
      retry_count++;
    }
  }

  RCLCPP_ERROR(kLogger, "Reached maximum retries. Operation failed.");
  return {};
}

void DefaultDriver::set_slave_address(uint8_t slave_address)
{
  slave_address_ = slave_address;
  RCLCPP_INFO(kLogger, "slave_address set to: %d", slave_address);
}

void DefaultDriver::activate()
{
  RCLCPP_INFO(kLogger, "Resetting before activation...");
  build_request_and_send({ 0x00, 0x00 }, kActivateResponseSize);  // rACT = 0
  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  RCLCPP_INFO(kLogger, "Activate...");
  uint8_t action_request_register = 0b00000000;
  default_driver_utils::set_gripper_activation(action_request_register, GripperActivationAction::ACTIVE);
  default_driver_utils::set_go_to(action_request_register, GoTo::STOP);

  build_request_and_send({ action_request_register, 0x00 }, kActivateResponseSize);

  wait_until_activated();
}

void DefaultDriver::clear_faults()
{
  RCLCPP_INFO(kLogger, "Clearing faults...");
  build_request_and_send({ 0x00, 0x00 }, 8);
}

void DefaultDriver::build_request_and_send(std::vector<uint8_t> regs, size_t const response_size)
{
  if (regs.size() > std::numeric_limits<uint8_t>::max())
  {
    throw DriverException{ "Too many registers to send_independent_control_command!" };
  }

  if (regs.size() % 2 != 0)
  {
    throw DriverException{ "Must send an even number of robotiq registers!" };
  }

  uint8_t const num_robotiq_registers = static_cast<uint8_t>(regs.size());
  uint8_t const num_modbus_registers = num_robotiq_registers / 2;

  std::vector<uint8_t> pdu = {
    static_cast<uint8_t>(default_driver_utils::FunctionCode::PresetMultipleRegisters),
    data_utils::get_msb(kActionRequestRegisterAddress),
    data_utils::get_lsb(kActionRequestRegisterAddress),
    data_utils::get_msb(num_modbus_registers),
    data_utils::get_lsb(num_modbus_registers),
    num_robotiq_registers
  };
  pdu.insert(pdu.end(), regs.begin(), regs.end());

  auto response = send(pdu, response_size);
  if (response.empty())
  {
    throw DriverException{ "Failed to activate the gripper." };
  }
}

void DefaultDriver::wait_until_activated()
{
  constexpr auto kActivationTimeout = std::chrono::seconds(5);
  auto const start = std::chrono::steady_clock::now();

  while (true)
  {
    auto status = get_full_status();
    if (status.gripper_status == GripperStatus::ACTIVATED)
    {
      break;
    }

    if (std::chrono::steady_clock::now() - start > kActivationTimeout)
    {
      RCLCPP_WARN(kLogger, "Activation status never reported ACTIVATED after timeout; "
                           "proceeding anyway since gACT is set.");
      break;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
}

void DefaultDriver::deactivate()
{
  RCLCPP_INFO(kLogger, "Deactivate...");
  build_request_and_send({ 0x00, 0x00 }, kDeactivateResponseSize);
}

FullGripperStatus DefaultDriver::get_full_status()
{
  std::vector<uint8_t> pdu = {
    static_cast<uint8_t>(default_driver_utils::FunctionCode::ReadInputRegisters),
    data_utils::get_msb(kGripperStatusRegister),
    data_utils::get_lsb(kGripperStatusRegister),
    data_utils::get_msb(kNumModBusRegisters),
    data_utils::get_lsb(kNumModBusRegisters),
  };

  auto response = send(pdu, kResponseSizeHeaderSize + 2 * kNumModBusRegisters);
  if (response.empty())
  {
    throw DriverException{ "Failed to read the status." };
  }

  // TEMP DEBUG - remove after troubleshooting
  //std::stringstream ss;
  //for (auto b : response) ss << std::hex << static_cast<int>(b) << " ";
  //RCLCPP_INFO(kLogger, "Raw response (%zu bytes): %s", response.size(), ss.str().c_str());
    // TEMP DEBUG - decoded activation status
  RCLCPP_INFO(kLogger, "gSTA: %d, gACT: %d, gFLT: %d",
            (response[9] >> 4) & 0x03, response[9] & 0x01, response[10]);

  RCLCPP_INFO(kLogger, "FingerA pos: %d, FingerB pos: %d, FingerC pos: %d, Scissor pos: %d",
              response[13], response[16], response[19], response[22]);

  // response layout: [7-byte MBAP header][function code][byte count][register data...]
  // register data starts at index 9 (7 header bytes + function code + byte count)
  FullGripperStatus status{};
  status.activation_status = default_driver_utils::get_gripper_activation_status(response[9]);
  status.mode_status = default_driver_utils::get_grasping_mode(response[9]);
  status.go_to_status = default_driver_utils::get_go_to_status(response[9]);
  status.gripper_status = default_driver_utils::get_gripper_status(response[9]);
  status.motion_status = default_driver_utils::get_motion_status(response[9]);
  status.finger_a_object_detection_status = default_driver_utils::get_finger_a_object_status(response[10]);
  status.finger_b_object_detection_status = default_driver_utils::get_finger_b_object_status(response[10]);
  status.finger_c_object_detection_status = default_driver_utils::get_finger_c_object_status(response[10]);
  status.scissor_object_detection_status = default_driver_utils::get_scissor_object_status(response[10]);
  status.fault_status = default_driver_utils::get_gripper_fault_status(response[11]);
  status.finger_a_position_cmd_echo = response[12];
  status.finger_a_position = response[13];
  status.finger_a_current = response[14];
  status.finger_b_position_cmd_echo = response[15];
  status.finger_b_position = response[16];
  status.finger_b_current = response[17];
  status.finger_c_position_cmd_echo = response[18];
  status.finger_c_position = response[19];
  status.finger_c_current = response[20];
  status.scissor_position_cmd_echo = response[21];
  status.scissor_position = response[22];
  status.scissor_current = response[23];

  return status;
}

void DefaultDriver::send_independent_control_command(IndependentControlCommand const& cmd)
{
  uint8_t clear_gto_register = 0b00000000;
  default_driver_utils::set_gripper_activation(clear_gto_register, GripperActivationAction::ACTIVE);
  default_driver_utils::set_go_to(clear_gto_register, GoTo::STOP);

  build_request_and_send({ clear_gto_register, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
                          8);

  std::this_thread::sleep_for(std::chrono::milliseconds(50));

  uint8_t action_request_register = 0b00000000;
  default_driver_utils::set_gripper_activation(action_request_register, GripperActivationAction::ACTIVE);
  default_driver_utils::set_go_to(action_request_register, GoTo::GO_TO);

  uint8_t gripper_options_register = 0b00000000;
  default_driver_utils::set_individual_control_mode(gripper_options_register, true);
  default_driver_utils::set_individual_scissor_control_mode(gripper_options_register, true);

  build_request_and_send(
      {
          action_request_register,
          gripper_options_register,
          0x00,  // This register must always be empty
          default_driver_utils::double_to_uint8(cmd.finger_a_position),
          default_driver_utils::double_to_uint8(cmd.finger_a_velocity),
          default_driver_utils::double_to_uint8(cmd.finger_a_force),
          default_driver_utils::double_to_uint8(cmd.finger_b_position),
          default_driver_utils::double_to_uint8(cmd.finger_b_velocity),
          default_driver_utils::double_to_uint8(cmd.finger_b_force),
          default_driver_utils::double_to_uint8(cmd.finger_c_position),
          default_driver_utils::double_to_uint8(cmd.finger_c_velocity),
          default_driver_utils::double_to_uint8(cmd.finger_c_force),
          default_driver_utils::double_to_uint8(cmd.scissor_position),
          default_driver_utils::double_to_uint8(cmd.scissor_velocity),
          default_driver_utils::double_to_uint8(cmd.scissor_force),
          0x00,  // Reserved.
      },
      8);
}

void DefaultDriver::send_simple_control_command(GraspingMode const& mode, double position, double velocity,
                                                 double force)
{
  // Force a fresh rGTO rising edge, otherwise the move is a silent no-op
  // if rGTO was already 1 from a previous command.
  uint8_t clear_gto_register = 0b00000000;
  default_driver_utils::set_gripper_activation(clear_gto_register, GripperActivationAction::ACTIVE);
  default_driver_utils::set_go_to(clear_gto_register, GoTo::STOP);

  build_request_and_send({ clear_gto_register, 0x00, 0x00, 0x00, 0x00, 0x00,
                            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
                          8);

  std::this_thread::sleep_for(std::chrono::milliseconds(50));

  uint8_t action_request_register = 0b00000000;
  default_driver_utils::set_gripper_activation(action_request_register, GripperActivationAction::ACTIVE);
  default_driver_utils::set_go_to(action_request_register, GoTo::GO_TO);
  default_driver_utils::set_grasping_mode(action_request_register, mode);

  uint8_t gripper_options_register = 0b00000000;
  default_driver_utils::set_individual_control_mode(gripper_options_register, false);
  default_driver_utils::set_individual_scissor_control_mode(gripper_options_register, false);

  build_request_and_send(
      {
          action_request_register,
          gripper_options_register,
          0x00,  // This register must always be empty
          default_driver_utils::double_to_uint8(position),
          default_driver_utils::double_to_uint8(velocity),
          default_driver_utils::double_to_uint8(force),
          0x00,  // The rest of the registers must be empty when using Simple Control Mode
          0x00,
          0x00,
          0x00,
          0x00,
          0x00,
          0x00,
          0x00,
          0x00,
          0x00,
      },
      8);
}

DefaultDriver::~DefaultDriver()
{
  DefaultDriver::deactivate();
  DefaultDriver::disconnect();
}

}  // namespace robotiq_3f_driver