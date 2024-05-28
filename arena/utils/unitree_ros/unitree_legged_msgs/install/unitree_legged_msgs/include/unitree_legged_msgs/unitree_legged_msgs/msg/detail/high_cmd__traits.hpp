// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_legged_msgs/msg/detail/high_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bms'
#include "unitree_legged_msgs/msg/detail/bms_cmd__traits.hpp"
// Member 'led'
#include "unitree_legged_msgs/msg/detail/led__traits.hpp"

namespace unitree_legged_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HighCmd & msg,
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

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: gaittype
  {
    out << "gaittype: ";
    rosidl_generator_traits::value_to_yaml(msg.gaittype, out);
    out << ", ";
  }

  // member: speedlevel
  {
    out << "speedlevel: ";
    rosidl_generator_traits::value_to_yaml(msg.speedlevel, out);
    out << ", ";
  }

  // member: footraiseheight
  {
    out << "footraiseheight: ";
    rosidl_generator_traits::value_to_yaml(msg.footraiseheight, out);
    out << ", ";
  }

  // member: bodyheight
  {
    out << "bodyheight: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyheight, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: euler
  {
    if (msg.euler.size() == 0) {
      out << "euler: []";
    } else {
      out << "euler: [";
      size_t pending_items = msg.euler.size();
      for (auto item : msg.euler) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yawspeed
  {
    out << "yawspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed, out);
    out << ", ";
  }

  // member: bms
  {
    out << "bms: ";
    to_flow_style_yaml(msg.bms, out);
    out << ", ";
  }

  // member: led
  {
    if (msg.led.size() == 0) {
      out << "led: []";
    } else {
      out << "led: [";
      size_t pending_items = msg.led.size();
      for (auto item : msg.led) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HighCmd & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: gaittype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gaittype: ";
    rosidl_generator_traits::value_to_yaml(msg.gaittype, out);
    out << "\n";
  }

  // member: speedlevel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedlevel: ";
    rosidl_generator_traits::value_to_yaml(msg.speedlevel, out);
    out << "\n";
  }

  // member: footraiseheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footraiseheight: ";
    rosidl_generator_traits::value_to_yaml(msg.footraiseheight, out);
    out << "\n";
  }

  // member: bodyheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bodyheight: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyheight, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: euler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.euler.size() == 0) {
      out << "euler: []\n";
    } else {
      out << "euler:\n";
      for (auto item : msg.euler) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yawspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed, out);
    out << "\n";
  }

  // member: bms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms:\n";
    to_block_style_yaml(msg.bms, out, indentation + 2);
  }

  // member: led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led.size() == 0) {
      out << "led: []\n";
    } else {
      out << "led:\n";
      for (auto item : msg.led) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HighCmd & msg, bool use_flow_style = false)
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
  const unitree_legged_msgs::msg::HighCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_legged_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_legged_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_legged_msgs::msg::HighCmd & msg)
{
  return unitree_legged_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_legged_msgs::msg::HighCmd>()
{
  return "unitree_legged_msgs::msg::HighCmd";
}

template<>
inline const char * name<unitree_legged_msgs::msg::HighCmd>()
{
  return "unitree_legged_msgs/msg/HighCmd";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::HighCmd>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::BmsCmd>::value && has_fixed_size<unitree_legged_msgs::msg::LED>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::HighCmd>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::BmsCmd>::value && has_bounded_size<unitree_legged_msgs::msg::LED>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::HighCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_
