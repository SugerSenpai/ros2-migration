// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__TRAITS_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_control_msgs/msg/detail/obstacle_distances__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'distances'
#include "cob_control_msgs/msg/detail/obstacle_distance__traits.hpp"

namespace cob_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleDistances & msg,
  std::ostream & out)
{
  out << "{";
  // member: distances
  {
    if (msg.distances.size() == 0) {
      out << "distances: []";
    } else {
      out << "distances: [";
      size_t pending_items = msg.distances.size();
      for (auto item : msg.distances) {
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
  const ObstacleDistances & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distances.size() == 0) {
      out << "distances: []\n";
    } else {
      out << "distances:\n";
      for (auto item : msg.distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleDistances & msg, bool use_flow_style = false)
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

}  // namespace cob_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cob_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_control_msgs::msg::ObstacleDistances & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cob_control_msgs::msg::ObstacleDistances & msg)
{
  return cob_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cob_control_msgs::msg::ObstacleDistances>()
{
  return "cob_control_msgs::msg::ObstacleDistances";
}

template<>
inline const char * name<cob_control_msgs::msg::ObstacleDistances>()
{
  return "cob_control_msgs/msg/ObstacleDistances";
}

template<>
struct has_fixed_size<cob_control_msgs::msg::ObstacleDistances>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_control_msgs::msg::ObstacleDistances>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_control_msgs::msg::ObstacleDistances>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__TRAITS_HPP_
