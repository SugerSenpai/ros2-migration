// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_control_msgs/msg/detail/obstacle_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDistance_nearest_point_obstacle_vector
{
public:
  explicit Init_ObstacleDistance_nearest_point_obstacle_vector(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  ::cob_control_msgs::msg::ObstacleDistance nearest_point_obstacle_vector(::cob_control_msgs::msg::ObstacleDistance::_nearest_point_obstacle_vector_type arg)
  {
    msg_.nearest_point_obstacle_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_nearest_point_frame_vector
{
public:
  explicit Init_ObstacleDistance_nearest_point_frame_vector(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_nearest_point_obstacle_vector nearest_point_frame_vector(::cob_control_msgs::msg::ObstacleDistance::_nearest_point_frame_vector_type arg)
  {
    msg_.nearest_point_frame_vector = std::move(arg);
    return Init_ObstacleDistance_nearest_point_obstacle_vector(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_frame_vector
{
public:
  explicit Init_ObstacleDistance_frame_vector(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_nearest_point_frame_vector frame_vector(::cob_control_msgs::msg::ObstacleDistance::_frame_vector_type arg)
  {
    msg_.frame_vector = std::move(arg);
    return Init_ObstacleDistance_nearest_point_frame_vector(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_distance
{
public:
  explicit Init_ObstacleDistance_distance(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_frame_vector distance(::cob_control_msgs::msg::ObstacleDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ObstacleDistance_frame_vector(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_obstacle_id
{
public:
  explicit Init_ObstacleDistance_obstacle_id(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_distance obstacle_id(::cob_control_msgs::msg::ObstacleDistance::_obstacle_id_type arg)
  {
    msg_.obstacle_id = std::move(arg);
    return Init_ObstacleDistance_distance(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_link_of_interest
{
public:
  explicit Init_ObstacleDistance_link_of_interest(::cob_control_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_obstacle_id link_of_interest(::cob_control_msgs::msg::ObstacleDistance::_link_of_interest_type arg)
  {
    msg_.link_of_interest = std::move(arg);
    return Init_ObstacleDistance_obstacle_id(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_header
{
public:
  Init_ObstacleDistance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleDistance_link_of_interest header(::cob_control_msgs::msg::ObstacleDistance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleDistance_link_of_interest(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_control_msgs::msg::ObstacleDistance>()
{
  return cob_control_msgs::msg::builder::Init_ObstacleDistance_header();
}

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
