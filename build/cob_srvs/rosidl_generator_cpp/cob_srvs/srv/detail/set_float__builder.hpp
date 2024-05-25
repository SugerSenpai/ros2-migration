// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cob_srvs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
#define COB_SRVS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cob_srvs/srv/detail/set_float__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cob_srvs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Request_data
{
public:
  Init_SetFloat_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cob_srvs::srv::SetFloat_Request data(::cob_srvs::srv::SetFloat_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_srvs::srv::SetFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_srvs::srv::SetFloat_Request>()
{
  return cob_srvs::srv::builder::Init_SetFloat_Request_data();
}

}  // namespace cob_srvs


namespace cob_srvs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Response_message
{
public:
  explicit Init_SetFloat_Response_message(::cob_srvs::srv::SetFloat_Response & msg)
  : msg_(msg)
  {}
  ::cob_srvs::srv::SetFloat_Response message(::cob_srvs::srv::SetFloat_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cob_srvs::srv::SetFloat_Response msg_;
};

class Init_SetFloat_Response_success
{
public:
  Init_SetFloat_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFloat_Response_message success(::cob_srvs::srv::SetFloat_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFloat_Response_message(msg_);
  }

private:
  ::cob_srvs::srv::SetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cob_srvs::srv::SetFloat_Response>()
{
  return cob_srvs::srv::builder::Init_SetFloat_Response_success();
}

}  // namespace cob_srvs

#endif  // COB_SRVS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
