// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__BUILDER_HPP_
#define COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_control_msgs/srv/detail/get_obstacle_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObstacleDistance_Request_objects
{
public:
  explicit Init_GetObstacleDistance_Request_objects(::cob_control_msgs::srv::GetObstacleDistance_Request & msg)
  : msg_(msg)
  {}
  ::cob_control_msgs::srv::GetObstacleDistance_Request objects(::cob_control_msgs::srv::GetObstacleDistance_Request::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_control_msgs::srv::GetObstacleDistance_Request msg_;
};

class Init_GetObstacleDistance_Request_links
{
public:
  Init_GetObstacleDistance_Request_links()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObstacleDistance_Request_objects links(::cob_control_msgs::srv::GetObstacleDistance_Request::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_GetObstacleDistance_Request_objects(msg_);
  }

private:
  ::cob_control_msgs::srv::GetObstacleDistance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_control_msgs::srv::GetObstacleDistance_Request>()
{
  return cob_control_msgs::srv::builder::Init_GetObstacleDistance_Request_links();
}

}  // namespace cob_control_msgs


namespace cob_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObstacleDistance_Response_distances
{
public:
  explicit Init_GetObstacleDistance_Response_distances(::cob_control_msgs::srv::GetObstacleDistance_Response & msg)
  : msg_(msg)
  {}
  ::cob_control_msgs::srv::GetObstacleDistance_Response distances(::cob_control_msgs::srv::GetObstacleDistance_Response::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_control_msgs::srv::GetObstacleDistance_Response msg_;
};

class Init_GetObstacleDistance_Response_link_to_object
{
public:
  Init_GetObstacleDistance_Response_link_to_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObstacleDistance_Response_distances link_to_object(::cob_control_msgs::srv::GetObstacleDistance_Response::_link_to_object_type arg)
  {
    msg_.link_to_object = std::move(arg);
    return Init_GetObstacleDistance_Response_distances(msg_);
  }

private:
  ::cob_control_msgs::srv::GetObstacleDistance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_control_msgs::srv::GetObstacleDistance_Response>()
{
  return cob_control_msgs::srv::builder::Init_GetObstacleDistance_Response_link_to_object();
}

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__BUILDER_HPP_
