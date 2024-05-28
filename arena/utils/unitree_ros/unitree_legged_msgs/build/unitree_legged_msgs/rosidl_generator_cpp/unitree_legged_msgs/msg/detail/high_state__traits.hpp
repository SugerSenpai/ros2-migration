// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_legged_msgs/msg/detail/high_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__traits.hpp"
// Member 'motorstate'
#include "unitree_legged_msgs/msg/detail/motor_state__traits.hpp"
// Member 'bms'
#include "unitree_legged_msgs/msg/detail/bms_state__traits.hpp"
// Member 'footposition2body'
// Member 'footspeed2body'
#include "unitree_legged_msgs/msg/detail/cartesian__traits.hpp"

namespace unitree_legged_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HighState & msg,
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

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: gaittype
  {
    out << "gaittype: ";
    rosidl_generator_traits::value_to_yaml(msg.gaittype, out);
    out << ", ";
  }

  // member: footraiseheight
  {
    out << "footraiseheight: ";
    rosidl_generator_traits::value_to_yaml(msg.footraiseheight, out);
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

  // member: bodyheight
  {
    out << "bodyheight: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyheight, out);
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

  // member: rangeobstacle
  {
    if (msg.rangeobstacle.size() == 0) {
      out << "rangeobstacle: []";
    } else {
      out << "rangeobstacle: [";
      size_t pending_items = msg.rangeobstacle.size();
      for (auto item : msg.rangeobstacle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: footposition2body
  {
    if (msg.footposition2body.size() == 0) {
      out << "footposition2body: []";
    } else {
      out << "footposition2body: [";
      size_t pending_items = msg.footposition2body.size();
      for (auto item : msg.footposition2body) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: footspeed2body
  {
    if (msg.footspeed2body.size() == 0) {
      out << "footspeed2body: []";
    } else {
      out << "footspeed2body: [";
      size_t pending_items = msg.footspeed2body.size();
      for (auto item : msg.footspeed2body) {
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
  const HighState & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
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

  // member: footraiseheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footraiseheight: ";
    rosidl_generator_traits::value_to_yaml(msg.footraiseheight, out);
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

  // member: bodyheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bodyheight: ";
    rosidl_generator_traits::value_to_yaml(msg.bodyheight, out);
    out << "\n";
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

  // member: rangeobstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rangeobstacle.size() == 0) {
      out << "rangeobstacle: []\n";
    } else {
      out << "rangeobstacle:\n";
      for (auto item : msg.rangeobstacle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: footposition2body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.footposition2body.size() == 0) {
      out << "footposition2body: []\n";
    } else {
      out << "footposition2body:\n";
      for (auto item : msg.footposition2body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: footspeed2body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.footspeed2body.size() == 0) {
      out << "footspeed2body: []\n";
    } else {
      out << "footspeed2body:\n";
      for (auto item : msg.footspeed2body) {
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

inline std::string to_yaml(const HighState & msg, bool use_flow_style = false)
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
  const unitree_legged_msgs::msg::HighState & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_legged_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_legged_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_legged_msgs::msg::HighState & msg)
{
  return unitree_legged_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_legged_msgs::msg::HighState>()
{
  return "unitree_legged_msgs::msg::HighState";
}

template<>
inline const char * name<unitree_legged_msgs::msg::HighState>()
{
  return "unitree_legged_msgs/msg/HighState";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::HighState>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::BmsState>::value && has_fixed_size<unitree_legged_msgs::msg::Cartesian>::value && has_fixed_size<unitree_legged_msgs::msg::IMU>::value && has_fixed_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::HighState>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::BmsState>::value && has_bounded_size<unitree_legged_msgs::msg::Cartesian>::value && has_bounded_size<unitree_legged_msgs::msg::IMU>::value && has_bounded_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::HighState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_
