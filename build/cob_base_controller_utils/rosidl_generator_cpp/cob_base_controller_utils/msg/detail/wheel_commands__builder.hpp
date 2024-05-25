// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#ifndef COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__BUILDER_HPP_
#define COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_base_controller_utils/msg/detail/wheel_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_base_controller_utils
{

namespace msg
{

namespace builder
{

class Init_WheelCommands_steer_target_error
{
public:
  explicit Init_WheelCommands_steer_target_error(::cob_base_controller_utils::msg::WheelCommands & msg)
  : msg_(msg)
  {}
  ::cob_base_controller_utils::msg::WheelCommands steer_target_error(::cob_base_controller_utils::msg::WheelCommands::_steer_target_error_type arg)
  {
    msg_.steer_target_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_base_controller_utils::msg::WheelCommands msg_;
};

class Init_WheelCommands_steer_target_position
{
public:
  explicit Init_WheelCommands_steer_target_position(::cob_base_controller_utils::msg::WheelCommands & msg)
  : msg_(msg)
  {}
  Init_WheelCommands_steer_target_error steer_target_position(::cob_base_controller_utils::msg::WheelCommands::_steer_target_position_type arg)
  {
    msg_.steer_target_position = std::move(arg);
    return Init_WheelCommands_steer_target_error(msg_);
  }

private:
  ::cob_base_controller_utils::msg::WheelCommands msg_;
};

class Init_WheelCommands_steer_target_velocity
{
public:
  explicit Init_WheelCommands_steer_target_velocity(::cob_base_controller_utils::msg::WheelCommands & msg)
  : msg_(msg)
  {}
  Init_WheelCommands_steer_target_position steer_target_velocity(::cob_base_controller_utils::msg::WheelCommands::_steer_target_velocity_type arg)
  {
    msg_.steer_target_velocity = std::move(arg);
    return Init_WheelCommands_steer_target_position(msg_);
  }

private:
  ::cob_base_controller_utils::msg::WheelCommands msg_;
};

class Init_WheelCommands_drive_target_velocity
{
public:
  explicit Init_WheelCommands_drive_target_velocity(::cob_base_controller_utils::msg::WheelCommands & msg)
  : msg_(msg)
  {}
  Init_WheelCommands_steer_target_velocity drive_target_velocity(::cob_base_controller_utils::msg::WheelCommands::_drive_target_velocity_type arg)
  {
    msg_.drive_target_velocity = std::move(arg);
    return Init_WheelCommands_steer_target_velocity(msg_);
  }

private:
  ::cob_base_controller_utils::msg::WheelCommands msg_;
};

class Init_WheelCommands_header
{
public:
  Init_WheelCommands_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelCommands_drive_target_velocity header(::cob_base_controller_utils::msg::WheelCommands::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelCommands_drive_target_velocity(msg_);
  }

private:
  ::cob_base_controller_utils::msg::WheelCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_base_controller_utils::msg::WheelCommands>()
{
  return cob_base_controller_utils::msg::builder::Init_WheelCommands_header();
}

}  // namespace cob_base_controller_utils

#endif  // COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__BUILDER_HPP_
