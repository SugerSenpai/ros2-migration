// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_legged_msgs/msg/detail/high_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unitree_legged_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HighState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_legged_msgs::msg::HighState(_init);
}

void HighState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_legged_msgs::msg::HighState *>(message_memory);
  typed_message->~HighState();
}

size_t size_function__HighState__head(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HighState__head(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__head(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__head(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HighState__head(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__head(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HighState__head(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__HighState__sn(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HighState__sn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__sn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__sn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__HighState__sn(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__sn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__HighState__sn(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__HighState__version(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HighState__version(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__version(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__HighState__version(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__HighState__version(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__HighState__motorstate(const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * get_const_function__HighState__motorstate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::MotorState, 20> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__motorstate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::MotorState, 20> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__motorstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::MotorState *>(
    get_const_function__HighState__motorstate(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::MotorState *>(untyped_value);
  value = item;
}

void assign_function__HighState__motorstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::MotorState *>(
    get_function__HighState__motorstate(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::MotorState *>(untyped_value);
  item = value;
}

size_t size_function__HighState__footforce(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footforce(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footforce(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__footforce(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__HighState__footforce(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__footforce(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__HighState__footforce(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__HighState__footforceest(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footforceest(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footforceest(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__footforceest(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__HighState__footforceest(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__footforceest(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__HighState__footforceest(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__HighState__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__HighState__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__HighState__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__HighState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__HighState__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__HighState__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__HighState__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__HighState__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__HighState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__HighState__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__HighState__rangeobstacle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__rangeobstacle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__rangeobstacle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__rangeobstacle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__HighState__rangeobstacle(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__HighState__rangeobstacle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__HighState__rangeobstacle(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__HighState__footposition2body(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footposition2body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footposition2body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__footposition2body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(
    get_const_function__HighState__footposition2body(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  value = item;
}

void assign_function__HighState__footposition2body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(
    get_function__HighState__footposition2body(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  item = value;
}

size_t size_function__HighState__footspeed2body(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__HighState__footspeed2body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__footspeed2body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__footspeed2body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(
    get_const_function__HighState__footspeed2body(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  value = item;
}

void assign_function__HighState__footspeed2body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(
    get_function__HighState__footspeed2body(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  item = value;
}

size_t size_function__HighState__wirelessremote(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__HighState__wirelessremote(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__HighState__wirelessremote(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__HighState__wirelessremote(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HighState__wirelessremote(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HighState__wirelessremote(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HighState__wirelessremote(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HighState_message_member_array[25] = {
  {
    "head",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, head),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__head,  // size() function pointer
    get_const_function__HighState__head,  // get_const(index) function pointer
    get_function__HighState__head,  // get(index) function pointer
    fetch_function__HighState__head,  // fetch(index, &value) function pointer
    assign_function__HighState__head,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "levelflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, levelflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "framereserve",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, framereserve),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, sn),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__sn,  // size() function pointer
    get_const_function__HighState__sn,  // get_const(index) function pointer
    get_function__HighState__sn,  // get(index) function pointer
    fetch_function__HighState__sn,  // fetch(index, &value) function pointer
    assign_function__HighState__sn,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, version),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__version,  // size() function pointer
    get_const_function__HighState__version,  // get_const(index) function pointer
    get_function__HighState__version,  // get(index) function pointer
    fetch_function__HighState__version,  // fetch(index, &value) function pointer
    assign_function__HighState__version,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, bandwidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::IMU>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, imu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motorstate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::MotorState>(),  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, motorstate),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__motorstate,  // size() function pointer
    get_const_function__HighState__motorstate,  // get_const(index) function pointer
    get_function__HighState__motorstate,  // get(index) function pointer
    fetch_function__HighState__motorstate,  // fetch(index, &value) function pointer
    assign_function__HighState__motorstate,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::BmsState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, bms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footforce",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, footforce),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footforce,  // size() function pointer
    get_const_function__HighState__footforce,  // get_const(index) function pointer
    get_function__HighState__footforce,  // get(index) function pointer
    fetch_function__HighState__footforce,  // fetch(index, &value) function pointer
    assign_function__HighState__footforce,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footforceest",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, footforceest),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footforceest,  // size() function pointer
    get_const_function__HighState__footforceest,  // get_const(index) function pointer
    get_function__HighState__footforceest,  // get(index) function pointer
    fetch_function__HighState__footforceest,  // fetch(index, &value) function pointer
    assign_function__HighState__footforceest,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gaittype",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, gaittype),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footraiseheight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, footraiseheight),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__position,  // size() function pointer
    get_const_function__HighState__position,  // get_const(index) function pointer
    get_function__HighState__position,  // get(index) function pointer
    fetch_function__HighState__position,  // fetch(index, &value) function pointer
    assign_function__HighState__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bodyheight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, bodyheight),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__velocity,  // size() function pointer
    get_const_function__HighState__velocity,  // get_const(index) function pointer
    get_function__HighState__velocity,  // get(index) function pointer
    fetch_function__HighState__velocity,  // fetch(index, &value) function pointer
    assign_function__HighState__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yawspeed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, yawspeed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rangeobstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, rangeobstacle),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__rangeobstacle,  // size() function pointer
    get_const_function__HighState__rangeobstacle,  // get_const(index) function pointer
    get_function__HighState__rangeobstacle,  // get(index) function pointer
    fetch_function__HighState__rangeobstacle,  // fetch(index, &value) function pointer
    assign_function__HighState__rangeobstacle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footposition2body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, footposition2body),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footposition2body,  // size() function pointer
    get_const_function__HighState__footposition2body,  // get_const(index) function pointer
    get_function__HighState__footposition2body,  // get(index) function pointer
    fetch_function__HighState__footposition2body,  // fetch(index, &value) function pointer
    assign_function__HighState__footposition2body,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "footspeed2body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, footspeed2body),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__footspeed2body,  // size() function pointer
    get_const_function__HighState__footspeed2body,  // get_const(index) function pointer
    get_function__HighState__footspeed2body,  // get(index) function pointer
    fetch_function__HighState__footspeed2body,  // fetch(index, &value) function pointer
    assign_function__HighState__footspeed2body,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wirelessremote",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, wirelessremote),  // bytes offset in struct
    nullptr,  // default value
    size_function__HighState__wirelessremote,  // size() function pointer
    get_const_function__HighState__wirelessremote,  // get_const(index) function pointer
    get_function__HighState__wirelessremote,  // get(index) function pointer
    fetch_function__HighState__wirelessremote,  // fetch(index, &value) function pointer
    assign_function__HighState__wirelessremote,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, reserve),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::HighState, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HighState_message_members = {
  "unitree_legged_msgs::msg",  // message namespace
  "HighState",  // message name
  25,  // number of fields
  sizeof(unitree_legged_msgs::msg::HighState),
  HighState_message_member_array,  // message members
  HighState_init_function,  // function to initialize message memory (memory has to be allocated)
  HighState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HighState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HighState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unitree_legged_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_legged_msgs::msg::HighState>()
{
  return &::unitree_legged_msgs::msg::rosidl_typesupport_introspection_cpp::HighState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_legged_msgs, msg, HighState)() {
  return &::unitree_legged_msgs::msg::rosidl_typesupport_introspection_cpp::HighState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
