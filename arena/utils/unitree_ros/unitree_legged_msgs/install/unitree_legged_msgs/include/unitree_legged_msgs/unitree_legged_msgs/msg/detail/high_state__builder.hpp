// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unitree_legged_msgs/msg/detail/high_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_HighState_crc
{
public:
  explicit Init_HighState_crc(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::HighState crc(::unitree_legged_msgs::msg::HighState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_reserve
{
public:
  explicit Init_HighState_reserve(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_crc reserve(::unitree_legged_msgs::msg::HighState::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighState_crc(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_wirelessremote
{
public:
  explicit Init_HighState_wirelessremote(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_reserve wirelessremote(::unitree_legged_msgs::msg::HighState::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighState_reserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footspeed2body
{
public:
  explicit Init_HighState_footspeed2body(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_wirelessremote footspeed2body(::unitree_legged_msgs::msg::HighState::_footspeed2body_type arg)
  {
    msg_.footspeed2body = std::move(arg);
    return Init_HighState_wirelessremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footposition2body
{
public:
  explicit Init_HighState_footposition2body(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footspeed2body footposition2body(::unitree_legged_msgs::msg::HighState::_footposition2body_type arg)
  {
    msg_.footposition2body = std::move(arg);
    return Init_HighState_footspeed2body(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_rangeobstacle
{
public:
  explicit Init_HighState_rangeobstacle(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footposition2body rangeobstacle(::unitree_legged_msgs::msg::HighState::_rangeobstacle_type arg)
  {
    msg_.rangeobstacle = std::move(arg);
    return Init_HighState_footposition2body(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_yawspeed
{
public:
  explicit Init_HighState_yawspeed(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_rangeobstacle yawspeed(::unitree_legged_msgs::msg::HighState::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_HighState_rangeobstacle(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_velocity
{
public:
  explicit Init_HighState_velocity(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_yawspeed velocity(::unitree_legged_msgs::msg::HighState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_HighState_yawspeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_bodyheight
{
public:
  explicit Init_HighState_bodyheight(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_velocity bodyheight(::unitree_legged_msgs::msg::HighState::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighState_velocity(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_position
{
public:
  explicit Init_HighState_position(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bodyheight position(::unitree_legged_msgs::msg::HighState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_HighState_bodyheight(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footraiseheight
{
public:
  explicit Init_HighState_footraiseheight(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_position footraiseheight(::unitree_legged_msgs::msg::HighState::_footraiseheight_type arg)
  {
    msg_.footraiseheight = std::move(arg);
    return Init_HighState_position(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_gaittype
{
public:
  explicit Init_HighState_gaittype(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footraiseheight gaittype(::unitree_legged_msgs::msg::HighState::_gaittype_type arg)
  {
    msg_.gaittype = std::move(arg);
    return Init_HighState_footraiseheight(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_progress
{
public:
  explicit Init_HighState_progress(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_gaittype progress(::unitree_legged_msgs::msg::HighState::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_HighState_gaittype(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_mode
{
public:
  explicit Init_HighState_mode(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_progress mode(::unitree_legged_msgs::msg::HighState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighState_progress(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footforceest
{
public:
  explicit Init_HighState_footforceest(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_mode footforceest(::unitree_legged_msgs::msg::HighState::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_HighState_mode(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footforce
{
public:
  explicit Init_HighState_footforce(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforceest footforce(::unitree_legged_msgs::msg::HighState::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_HighState_footforceest(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_bms
{
public:
  explicit Init_HighState_bms(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforce bms(::unitree_legged_msgs::msg::HighState::_bms_type arg)
  {
    msg_.bms = std::move(arg);
    return Init_HighState_footforce(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_motorstate
{
public:
  explicit Init_HighState_motorstate(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bms motorstate(::unitree_legged_msgs::msg::HighState::_motorstate_type arg)
  {
    msg_.motorstate = std::move(arg);
    return Init_HighState_bms(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_imu
{
public:
  explicit Init_HighState_imu(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_motorstate imu(::unitree_legged_msgs::msg::HighState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_HighState_motorstate(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_bandwidth
{
public:
  explicit Init_HighState_bandwidth(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_imu bandwidth(::unitree_legged_msgs::msg::HighState::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighState_imu(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_version
{
public:
  explicit Init_HighState_version(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bandwidth version(::unitree_legged_msgs::msg::HighState::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_HighState_bandwidth(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_sn
{
public:
  explicit Init_HighState_sn(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_version sn(::unitree_legged_msgs::msg::HighState::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighState_version(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_framereserve
{
public:
  explicit Init_HighState_framereserve(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sn framereserve(::unitree_legged_msgs::msg::HighState::_framereserve_type arg)
  {
    msg_.framereserve = std::move(arg);
    return Init_HighState_sn(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_levelflag
{
public:
  explicit Init_HighState_levelflag(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_framereserve levelflag(::unitree_legged_msgs::msg::HighState::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighState_framereserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_head
{
public:
  Init_HighState_head()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighState_levelflag head(::unitree_legged_msgs::msg::HighState::_head_type arg)
  {
    msg_.head = std::move(arg);
    return Init_HighState_levelflag(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::HighState>()
{
  return unitree_legged_msgs::msg::builder::Init_HighState_head();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
