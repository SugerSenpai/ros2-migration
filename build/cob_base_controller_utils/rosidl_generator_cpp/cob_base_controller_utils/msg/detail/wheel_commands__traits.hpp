// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#ifndef COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__TRAITS_HPP_
#define COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_base_controller_utils/msg/detail/wheel_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cob_base_controller_utils
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drive_target_velocity
  {
    if (msg.drive_target_velocity.size() == 0) {
      out << "drive_target_velocity: []";
    } else {
      out << "drive_target_velocity: [";
      size_t pending_items = msg.drive_target_velocity.size();
      for (auto item : msg.drive_target_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_target_velocity
  {
    if (msg.steer_target_velocity.size() == 0) {
      out << "steer_target_velocity: []";
    } else {
      out << "steer_target_velocity: [";
      size_t pending_items = msg.steer_target_velocity.size();
      for (auto item : msg.steer_target_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_target_position
  {
    if (msg.steer_target_position.size() == 0) {
      out << "steer_target_position: []";
    } else {
      out << "steer_target_position: [";
      size_t pending_items = msg.steer_target_position.size();
      for (auto item : msg.steer_target_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_target_error
  {
    if (msg.steer_target_error.size() == 0) {
      out << "steer_target_error: []";
    } else {
      out << "steer_target_error: [";
      size_t pending_items = msg.steer_target_error.size();
      for (auto item : msg.steer_target_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const WheelCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: drive_target_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drive_target_velocity.size() == 0) {
      out << "drive_target_velocity: []\n";
    } else {
      out << "drive_target_velocity:\n";
      for (auto item : msg.drive_target_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_target_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_target_velocity.size() == 0) {
      out << "steer_target_velocity: []\n";
    } else {
      out << "steer_target_velocity:\n";
      for (auto item : msg.steer_target_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_target_position.size() == 0) {
      out << "steer_target_position: []\n";
    } else {
      out << "steer_target_position:\n";
      for (auto item : msg.steer_target_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_target_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_target_error.size() == 0) {
      out << "steer_target_error: []\n";
    } else {
      out << "steer_target_error:\n";
      for (auto item : msg.steer_target_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelCommands & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cob_base_controller_utils

namespace rosidl_generator_traits
{

[[deprecated("use cob_base_controller_utils::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_base_controller_utils::msg::WheelCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_base_controller_utils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_base_controller_utils::msg::to_yaml() instead")]]
inline std::string to_yaml(const cob_base_controller_utils::msg::WheelCommands & msg)
{
  return cob_base_controller_utils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cob_base_controller_utils::msg::WheelCommands>()
{
  return "cob_base_controller_utils::msg::WheelCommands";
}

template<>
inline const char * name<cob_base_controller_utils::msg::WheelCommands>()
{
  return "cob_base_controller_utils/msg/WheelCommands";
}

template<>
struct has_fixed_size<cob_base_controller_utils::msg::WheelCommands>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_base_controller_utils::msg::WheelCommands>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_base_controller_utils::msg::WheelCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__TRAITS_HPP_
