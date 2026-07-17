// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_3f_interfaces:srv/ChangeGraspingMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_3f_interfaces/srv/change_grasping_mode.hpp"


#ifndef ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__TRAITS_HPP_
#define ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_3f_interfaces/srv/detail/change_grasping_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "robotiq_3f_interfaces/msg/detail/grasping_mode__traits.hpp"

namespace robotiq_3f_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeGraspingMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeGraspingMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeGraspingMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotiq_3f_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_interfaces::srv::ChangeGraspingMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_interfaces::srv::ChangeGraspingMode_Request & msg)
{
  return robotiq_3f_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>()
{
  return "robotiq_3f_interfaces::srv::ChangeGraspingMode_Request";
}

template<>
inline const char * name<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>()
{
  return "robotiq_3f_interfaces/srv/ChangeGraspingMode_Request";
}

template<>
struct has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_interfaces::msg::GraspingMode>::value> {};

template<>
struct has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_interfaces::msg::GraspingMode>::value> {};

template<>
struct is_message<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_3f_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeGraspingMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeGraspingMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeGraspingMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotiq_3f_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_interfaces::srv::ChangeGraspingMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_interfaces::srv::ChangeGraspingMode_Response & msg)
{
  return robotiq_3f_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>()
{
  return "robotiq_3f_interfaces::srv::ChangeGraspingMode_Response";
}

template<>
inline const char * name<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>()
{
  return "robotiq_3f_interfaces/srv/ChangeGraspingMode_Response";
}

template<>
struct has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robotiq_3f_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeGraspingMode_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeGraspingMode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeGraspingMode_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotiq_3f_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_interfaces::srv::ChangeGraspingMode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_interfaces::srv::ChangeGraspingMode_Event & msg)
{
  return robotiq_3f_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>()
{
  return "robotiq_3f_interfaces::srv::ChangeGraspingMode_Event";
}

template<>
inline const char * name<robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>()
{
  return "robotiq_3f_interfaces/srv/ChangeGraspingMode_Event";
}

template<>
struct has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>::value && has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_3f_interfaces::srv::ChangeGraspingMode>()
{
  return "robotiq_3f_interfaces::srv::ChangeGraspingMode";
}

template<>
inline const char * name<robotiq_3f_interfaces::srv::ChangeGraspingMode>()
{
  return "robotiq_3f_interfaces/srv/ChangeGraspingMode";
}

template<>
struct has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>::value &&
    has_fixed_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>::value &&
    has_bounded_size<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>::value
  >
{
};

template<>
struct is_service<robotiq_3f_interfaces::srv::ChangeGraspingMode>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__TRAITS_HPP_
