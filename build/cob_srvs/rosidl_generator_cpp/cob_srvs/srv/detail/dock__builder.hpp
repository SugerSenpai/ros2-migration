// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_srvs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__DOCK__BUILDER_HPP_
#define COB_SRVS__SRV__DETAIL__DOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_srvs/srv/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_srvs
{

namespace srv
{

namespace builder
{

class Init_Dock_Request_dist_threshold
{
public:
  explicit Init_Dock_Request_dist_threshold(::cob_srvs::srv::Dock_Request & msg)
  : msg_(msg)
  {}
  ::cob_srvs::srv::Dock_Request dist_threshold(::cob_srvs::srv::Dock_Request::_dist_threshold_type arg)
  {
    msg_.dist_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

class Init_Dock_Request_stop_compare_value
{
public:
  explicit Init_Dock_Request_stop_compare_value(::cob_srvs::srv::Dock_Request & msg)
  : msg_(msg)
  {}
  Init_Dock_Request_dist_threshold stop_compare_value(::cob_srvs::srv::Dock_Request::_stop_compare_value_type arg)
  {
    msg_.stop_compare_value = std::move(arg);
    return Init_Dock_Request_dist_threshold(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

class Init_Dock_Request_stop_message_field
{
public:
  explicit Init_Dock_Request_stop_message_field(::cob_srvs::srv::Dock_Request & msg)
  : msg_(msg)
  {}
  Init_Dock_Request_stop_compare_value stop_message_field(::cob_srvs::srv::Dock_Request::_stop_message_field_type arg)
  {
    msg_.stop_message_field = std::move(arg);
    return Init_Dock_Request_stop_compare_value(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

class Init_Dock_Request_stop_topic
{
public:
  explicit Init_Dock_Request_stop_topic(::cob_srvs::srv::Dock_Request & msg)
  : msg_(msg)
  {}
  Init_Dock_Request_stop_message_field stop_topic(::cob_srvs::srv::Dock_Request::_stop_topic_type arg)
  {
    msg_.stop_topic = std::move(arg);
    return Init_Dock_Request_stop_message_field(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

class Init_Dock_Request_poses
{
public:
  explicit Init_Dock_Request_poses(::cob_srvs::srv::Dock_Request & msg)
  : msg_(msg)
  {}
  Init_Dock_Request_stop_topic poses(::cob_srvs::srv::Dock_Request::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_Dock_Request_stop_topic(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

class Init_Dock_Request_frame_id
{
public:
  Init_Dock_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_Request_poses frame_id(::cob_srvs::srv::Dock_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_Dock_Request_poses(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_srvs::srv::Dock_Request>()
{
  return cob_srvs::srv::builder::Init_Dock_Request_frame_id();
}

}  // namespace cob_srvs


namespace cob_srvs
{

namespace srv
{

namespace builder
{

class Init_Dock_Response_message
{
public:
  explicit Init_Dock_Response_message(::cob_srvs::srv::Dock_Response & msg)
  : msg_(msg)
  {}
  ::cob_srvs::srv::Dock_Response message(::cob_srvs::srv::Dock_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Response msg_;
};

class Init_Dock_Response_success
{
public:
  Init_Dock_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_Response_message success(::cob_srvs::srv::Dock_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Dock_Response_message(msg_);
  }

private:
  ::cob_srvs::srv::Dock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_srvs::srv::Dock_Response>()
{
  return cob_srvs::srv::builder::Init_Dock_Response_success();
}

}  // namespace cob_srvs

#endif  // COB_SRVS__SRV__DETAIL__DOCK__BUILDER_HPP_
