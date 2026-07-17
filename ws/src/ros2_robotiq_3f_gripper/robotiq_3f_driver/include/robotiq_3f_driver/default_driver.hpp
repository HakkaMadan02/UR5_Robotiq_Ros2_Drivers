#pragma once

#include <chrono>
#include <cstdint>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

#include <robotiq_3f_driver/driver.hpp>

namespace robotiq_3f_driver
{
/**
 * Exception thrown when the driver encounters a communication or protocol error.
 */
class DriverException : public std::runtime_error
{
public:
  explicit DriverException(const std::string& message) : std::runtime_error(message)
  {
  }
};

/**
 * This is the default implementation of the Driver to control the 3f Gripper.
 * Communicates over Modbus TCP instead of serial RTU.
 */
class DefaultDriver : public Driver
{
public:
  /**
   * Initialize the interface to control the Robotiq 3f gripper over Modbus TCP.
   * @param ip The IP address of the gripper's Modbus TCP module.
   * @param port The Modbus TCP port (default 502).
   */
  explicit DefaultDriver(std::string ip, uint16_t port = 502);

  virtual ~DefaultDriver();

  void set_slave_address(uint8_t slave_address) override;
  bool connect() override;
  void disconnect() override;

  /** Activate the gripper with the specified operation mode and parameters. */
  void activate() override;

  /** Deactivate the gripper. */
  void deactivate() override;

  FullGripperStatus get_full_status() override;

  void send_independent_control_command(IndependentControlCommand const& cmd) override;

  void send_simple_control_command(GraspingMode const& mode, double position, double velocity, double force) override;

  void clear_faults() override;

private:
  /**
   * With this command we send a request and wait for a response.
   * Behind the scene, if the response is not received, the software makes an attempt
   * to resend the command up to 5 times before returning an empty response.
   * @param pdu The Modbus PDU (function code + data, no unit ID, no CRC).
   * @param response_size Unused for TCP (kept for interface compatibility); actual size is read from MBAP header.
   * @return The full response (MBAP header + PDU) or an empty vector if an error occurred.
   */
  std::vector<uint8_t> send(const std::vector<uint8_t>& pdu, size_t response_size) const;

  void build_request_and_send(std::vector<uint8_t> regs, size_t response_size);

  std::string ip_;
  uint16_t port_ = 502;
  int sockfd_ = -1;
  mutable uint16_t transaction_id_ = 0;

  uint8_t slave_address_ = 0x00;
  void wait_until_activated();
};
}  // namespace robotiq_3f_driver