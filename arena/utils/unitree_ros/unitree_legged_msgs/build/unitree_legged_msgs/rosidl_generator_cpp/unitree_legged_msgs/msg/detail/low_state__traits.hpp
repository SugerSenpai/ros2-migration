// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_legged_msgs/msg/detail/low_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__traits.hpp"
// Member 'motorstate'
#include "unitree_legged_msgs/msg/detail/motor_state__traits.hpp"
// Member 'bms'
#include "unitree_legged_msgs/msg/detail/bms_state__traits.hpp"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "unitree_legged_msgs/msg/detail/cartesian__traits.hpp"

namespace unitree_legged_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowState & msg,
  std::ostream & out)
{
  out << "{";
  // member: head
  {
    if (msg.head.size() == 0) {
      out << "head: []";
    } else {
      out << "head: [";
      size_t pending_items = msg.head.size();
      for (auto item : msg.head) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: levelflag
  {
    out << "levelflag: ";
    rosidl_generator_traits::value_to_yaml(msg.levelflag, out);
    out << ", ";
  }

  // member: framereserve
  {
    out << "framereserve: ";
    rosidl_generator_traits::value_to_yaml(msg.framereserve, out);
    out << ", ";
  }

  // member: sn
  {
    if (msg.sn.size() == 0) {
      out << "sn: []";
    } else {
      out << "sn: [";
      size_t pending_items = msg.sn.size();
      for (auto item : msg.sn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: version
  {
    if (msg.version.size() == 0) {
      out << "version: []";
    } else {
      out << "version: [";
      size_t pending_items = msg.version.size();
      for (auto item : msg.version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bandwidth
  {
    out << "bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.bandwidth, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
    out << ", ";
  }

  // member: motorstate
  {
    if (msg.motorstate.size() == 0) {
      out << "motorstate: []";
    } else {
      out << "motorstate: [";
      size_t pending_items = msg.motorstate.size();
      for (auto item : msg.motorstate) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bms
  {
    out << "bms: ";
    to_flow_style_yaml(msg.bms, out);
    out << ", ";
  }

  // member: footforce
  {
    if (msg.footforce.size() == 0) {
      out << "footforce: []";
    } else {
      out << "footforce: [";
      size_t pending_items = msg.footforce.size();
      for (auto item : msg.footforce) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: footforceest
  {
    if (msg.footforceest.size() == 0) {
      out << "footforceest: []";
    } else {
      out << "footforceest: [";
      size_t pending_items = msg.footforceest.size();
      for (auto item : msg.footforceest) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tick
  {
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << ", ";
  }

  // member: wirelessremote
  {
    if (msg.wirelessremote.size() == 0) {
      out << "wirelessremote: []";
    } else {
      out << "wirelessremote: [";
      size_t pending_items = msg.wirelessremote.size();
      for (auto item : msg.wirelessremote) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reserve
  {
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << ", ";
  }

  // member: eeforceraw
  {
    if (msg.eeforceraw.size() == 0) {
      out << "eeforceraw: []";
    } else {
      out << "eeforceraw: [";
      size_t pending_items = msg.eeforceraw.size();
      for (auto item : msg.eeforceraw) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: eeforce
  {
    if (msg.eeforce.size() == 0) {
      out << "eeforce: []";
    } else {
      out << "eeforce: [";
      size_t pending_items = msg.eeforce.size();
      for (auto item : msg.eeforce) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: velocity_w
  {
    out << "velocity_w: ";
    to_flow_style_yaml(msg.velocity_w, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.head.size() == 0) {
      out << "head: []\n";
    } else {
      out << "head:\n";
      for (auto item : msg.head) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: levelflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "levelflag: ";
    rosidl_generator_traits::value_to_yaml(msg.levelflag, out);
    out << "\n";
  }

  // member: framereserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framereserve: ";
    rosidl_generator_traits::value_to_yaml(msg.framereserve, out);
    out << "\n";
  }

  // member: sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sn.size() == 0) {
      out << "sn: []\n";
    } else {
      out << "sn:\n";
      for (auto item : msg.sn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.version.size() == 0) {
      out << "version: []\n";
    } else {
      out << "version:\n";
      for (auto item : msg.version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bandwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.bandwidth, out);
    out << "\n";
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }

  // member: motorstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motorstate.size() == 0) {
      out << "motorstate: []\n";
    } else {
      out << "motorstate:\n";
      for (auto item : msg.motorstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms:\n";
    to_block_style_yaml(msg.bms, out, indentation + 2);
  }

  // member: footforce
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.footforce.size() == 0) {
      out << "footforce: []\n";
    } else {
      out << "footforce:\n";
      for (auto item : msg.footforce) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: footforceest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.footforceest.size() == 0) {
      out << "footforceest: []\n";
    } else {
      out << "footforceest:\n";
      for (auto item : msg.footforceest) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << "\n";
  }

  // member: wirelessremote
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wirelessremote.size() == 0) {
      out << "wirelessremote: []\n";
    } else {
      out << "wirelessremote:\n";
      for (auto item : msg.wirelessremote) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << "\n";
  }

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }

  // member: eeforceraw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.eeforceraw.size() == 0) {
      out << "eeforceraw: []\n";
    } else {
      out << "eeforceraw:\n";
      for (auto item : msg.eeforceraw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: eeforce
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.eeforce.size() == 0) {
      out << "eeforce: []\n";
    } else {
      out << "eeforce:\n";
      for (auto item : msg.eeforce) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: velocity_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_w:\n";
    to_block_style_yaml(msg.velocity_w, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LowState & msg, bool use_flow_style = false)
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

}  // namespace unitree_legged_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unitree_legged_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unitree_legged_msgs::msg::LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_legged_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_legged_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_legged_msgs::msg::LowState & msg)
{
  return unitree_legged_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_legged_msgs::msg::LowState>()
{
  return "unitree_legged_msgs::msg::LowState";
}

template<>
inline const char * name<unitree_legged_msgs::msg::LowState>()
{
  return "unitree_legged_msgs/msg/LowState";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::BmsState>::value && has_fixed_size<unitree_legged_msgs::msg::Cartesian>::value && has_fixed_size<unitree_legged_msgs::msg::IMU>::value && has_fixed_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::BmsState>::value && has_bounded_size<unitree_legged_msgs::msg::Cartesian>::value && has_bounded_size<unitree_legged_msgs::msg::IMU>::value && has_bounded_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
