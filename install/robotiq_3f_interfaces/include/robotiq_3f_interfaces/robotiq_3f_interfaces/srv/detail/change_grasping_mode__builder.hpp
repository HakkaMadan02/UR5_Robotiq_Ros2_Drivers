// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_3f_interfaces:srv/ChangeGraspingMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_3f_interfaces/srv/change_grasping_mode.hpp"


#ifndef ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__BUILDER_HPP_
#define ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_3f_interfaces/srv/detail/change_grasping_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_3f_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeGraspingMode_Request_mode
{
public:
  Init_ChangeGraspingMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Request mode(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_interfaces::srv::ChangeGraspingMode_Request>()
{
  return robotiq_3f_interfaces::srv::builder::Init_ChangeGraspingMode_Request_mode();
}

}  // namespace robotiq_3f_interfaces


namespace robotiq_3f_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeGraspingMode_Response_success
{
public:
  Init_ChangeGraspingMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Response success(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_interfaces::srv::ChangeGraspingMode_Response>()
{
  return robotiq_3f_interfaces::srv::builder::Init_ChangeGraspingMode_Response_success();
}

}  // namespace robotiq_3f_interfaces


namespace robotiq_3f_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeGraspingMode_Event_response
{
public:
  explicit Init_ChangeGraspingMode_Event_response(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event response(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event msg_;
};

class Init_ChangeGraspingMode_Event_request
{
public:
  explicit Init_ChangeGraspingMode_Event_request(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeGraspingMode_Event_response request(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeGraspingMode_Event_response(msg_);
  }

private:
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event msg_;
};

class Init_ChangeGraspingMode_Event_info
{
public:
  Init_ChangeGraspingMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeGraspingMode_Event_request info(::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeGraspingMode_Event_request(msg_);
  }

private:
  ::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_interfaces::srv::ChangeGraspingMode_Event>()
{
  return robotiq_3f_interfaces::srv::builder::Init_ChangeGraspingMode_Event_info();
}

}  // namespace robotiq_3f_interfaces

#endif  // ROBOTIQ_3F_INTERFACES__SRV__DETAIL__CHANGE_GRASPING_MODE__BUILDER_HPP_
