// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__BUILDER_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_control_msgs/msg/detail/obstacle_distances__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDistances_distances
{
public:
  Init_ObstacleDistances_distances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cob_control_msgs::msg::ObstacleDistances distances(::cob_control_msgs::msg::ObstacleDistances::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_control_msgs::msg::ObstacleDistances msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_control_msgs::msg::ObstacleDistances>()
{
  return cob_control_msgs::msg::builder::Init_ObstacleDistances_distances();
}

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__BUILDER_HPP_
