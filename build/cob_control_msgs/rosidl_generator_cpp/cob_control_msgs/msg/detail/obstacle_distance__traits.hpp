// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_control_msgs/msg/detail/obstacle_distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "cob_control_msgs/msg/detail/header__traits.hpp"
// Member 'frame_vector'
// Member 'nearest_point_frame_vector'
// Member 'nearest_point_obstacle_vector'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace cob_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleDistance & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: link_of_interest
  {
    out << "link_of_interest: ";
    rosidl_generator_traits::value_to_yaml(msg.link_of_interest, out);
    out << ", ";
  }

  // member: obstacle_id
  {
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: frame_vector
  {
    out << "frame_vector: ";
    to_flow_style_yaml(msg.frame_vector, out);
    out << ", ";
  }

  // member: nearest_point_frame_vector
  {
    out << "nearest_point_frame_vector: ";
    to_flow_style_yaml(msg.nearest_point_frame_vector, out);
    out << ", ";
  }

  // member: nearest_point_obstacle_vector
  {
    out << "nearest_point_obstacle_vector: ";
    to_flow_style_yaml(msg.nearest_point_obstacle_vector, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleDistance & msg,
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

  // member: link_of_interest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_of_interest: ";
    rosidl_generator_traits::value_to_yaml(msg.link_of_interest, out);
    out << "\n";
  }

  // member: obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: frame_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_vector:\n";
    to_block_style_yaml(msg.frame_vector, out, indentation + 2);
  }

  // member: nearest_point_frame_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_point_frame_vector:\n";
    to_block_style_yaml(msg.nearest_point_frame_vector, out, indentation + 2);
  }

  // member: nearest_point_obstacle_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_point_obstacle_vector:\n";
    to_block_style_yaml(msg.nearest_point_obstacle_vector, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleDistance & msg, bool use_flow_style = false)
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
  const cob_control_msgs::msg::ObstacleDistance & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cob_control_msgs::msg::ObstacleDistance & msg)
{
  return cob_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cob_control_msgs::msg::ObstacleDistance>()
{
  return "cob_control_msgs::msg::ObstacleDistance";
}

template<>
inline const char * name<cob_control_msgs::msg::ObstacleDistance>()
{
  return "cob_control_msgs/msg/ObstacleDistance";
}

template<>
struct has_fixed_size<cob_control_msgs::msg::ObstacleDistance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_control_msgs::msg::ObstacleDistance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_control_msgs::msg::ObstacleDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_
