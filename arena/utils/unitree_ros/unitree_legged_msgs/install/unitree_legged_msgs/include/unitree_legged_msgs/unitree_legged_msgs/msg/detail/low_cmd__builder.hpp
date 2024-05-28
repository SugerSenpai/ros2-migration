// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unitree_legged_msgs/msg/detail/low_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_LowCmd_crc
{
public:
  explicit Init_LowCmd_crc(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::LowCmd crc(::unitree_legged_msgs::msg::LowCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_reserve
{
public:
  explicit Init_LowCmd_reserve(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_crc reserve(::unitree_legged_msgs::msg::LowCmd::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_LowCmd_crc(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_wirelessremote
{
public:
  explicit Init_LowCmd_wirelessremote(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_reserve wirelessremote(::unitree_legged_msgs::msg::LowCmd::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_LowCmd_reserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_bms
{
public:
  explicit Init_LowCmd_bms(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_wirelessremote bms(::unitree_legged_msgs::msg::LowCmd::_bms_type arg)
  {
    msg_.bms = std::move(arg);
    return Init_LowCmd_wirelessremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_motorcmd
{
public:
  explicit Init_LowCmd_motorcmd(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_bms motorcmd(::unitree_legged_msgs::msg::LowCmd::_motorcmd_type arg)
  {
    msg_.motorcmd = std::move(arg);
    return Init_LowCmd_bms(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_bandwidth
{
public:
  explicit Init_LowCmd_bandwidth(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_motorcmd bandwidth(::unitree_legged_msgs::msg::LowCmd::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_LowCmd_motorcmd(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_version
{
public:
  explicit Init_LowCmd_version(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_bandwidth version(::unitree_legged_msgs::msg::LowCmd::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_LowCmd_bandwidth(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_sn
{
public:
  explicit Init_LowCmd_sn(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_version sn(::unitree_legged_msgs::msg::LowCmd::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_LowCmd_version(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_framereserve
{
public:
  explicit Init_LowCmd_framereserve(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_sn framereserve(::unitree_legged_msgs::msg::LowCmd::_framereserve_type arg)
  {
    msg_.framereserve = std::move(arg);
    return Init_LowCmd_sn(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_levelflag
{
public:
  explicit Init_LowCmd_levelflag(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_framereserve levelflag(::unitree_legged_msgs::msg::LowCmd::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_LowCmd_framereserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_head
{
public:
  Init_LowCmd_head()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowCmd_levelflag head(::unitree_legged_msgs::msg::LowCmd::_head_type arg)
  {
    msg_.head = std::move(arg);
    return Init_LowCmd_levelflag(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::LowCmd>()
{
  return unitree_legged_msgs::msg::builder::Init_LowCmd_head();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
