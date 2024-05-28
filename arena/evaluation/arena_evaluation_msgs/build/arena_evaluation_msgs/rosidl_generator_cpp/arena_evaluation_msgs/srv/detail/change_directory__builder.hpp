// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice

#ifndef ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__BUILDER_HPP_
#define ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arena_evaluation_msgs/srv/detail/change_directory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arena_evaluation_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeDirectory_Request_data
{
public:
  Init_ChangeDirectory_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arena_evaluation_msgs::srv::ChangeDirectory_Request data(::arena_evaluation_msgs::srv::ChangeDirectory_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arena_evaluation_msgs::srv::ChangeDirectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arena_evaluation_msgs::srv::ChangeDirectory_Request>()
{
  return arena_evaluation_msgs::srv::builder::Init_ChangeDirectory_Request_data();
}

}  // namespace arena_evaluation_msgs


namespace arena_evaluation_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeDirectory_Response_result
{
public:
  Init_ChangeDirectory_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arena_evaluation_msgs::srv::ChangeDirectory_Response result(::arena_evaluation_msgs::srv::ChangeDirectory_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arena_evaluation_msgs::srv::ChangeDirectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arena_evaluation_msgs::srv::ChangeDirectory_Response>()
{
  return arena_evaluation_msgs::srv::builder::Init_ChangeDirectory_Response_result();
}

}  // namespace arena_evaluation_msgs

#endif  // ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__BUILDER_HPP_
