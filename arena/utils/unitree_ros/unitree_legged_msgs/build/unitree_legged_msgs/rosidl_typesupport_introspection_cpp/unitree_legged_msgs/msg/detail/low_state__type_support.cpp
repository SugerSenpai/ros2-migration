// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_legged_msgs/msg/detail/low_state__struct.hpp"
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

void LowState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_legged_msgs::msg::LowState(_init);
}

void LowState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_legged_msgs::msg::LowState *>(message_memory);
  typed_message->~LowState();
}

size_t size_function__LowState__head(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__LowState__head(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__head(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__head(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LowState__head(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__head(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LowState__head(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__sn(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__LowState__sn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__sn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__sn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LowState__sn(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__sn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LowState__sn(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__version(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__LowState__version(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__version(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LowState__version(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LowState__version(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__motorstate(const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * get_const_function__LowState__motorstate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::MotorState, 20> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__motorstate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::MotorState, 20> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__motorstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::MotorState *>(
    get_const_function__LowState__motorstate(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::MotorState *>(untyped_value);
  value = item;
}

void assign_function__LowState__motorstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::MotorState *>(
    get_function__LowState__motorstate(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::MotorState *>(untyped_value);
  item = value;
}

size_t size_function__LowState__footforce(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowState__footforce(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__footforce(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__footforce(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__LowState__footforce(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__footforce(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__LowState__footforce(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__footforceest(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowState__footforceest(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__footforceest(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__footforceest(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__LowState__footforceest(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__footforceest(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__LowState__footforceest(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__wirelessremote(const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * get_const_function__LowState__wirelessremote(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__wirelessremote(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 40> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__wirelessremote(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LowState__wirelessremote(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LowState__wirelessremote(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LowState__wirelessremote(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__LowState__eeforceraw(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowState__eeforceraw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__eeforceraw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__eeforceraw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(
    get_const_function__LowState__eeforceraw(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  value = item;
}

void assign_function__LowState__eeforceraw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(
    get_function__LowState__eeforceraw(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  item = value;
}

size_t size_function__LowState__eeforce(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowState__eeforce(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__eeforce(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unitree_legged_msgs::msg::Cartesian, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowState__eeforce(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(
    get_const_function__LowState__eeforce(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  value = item;
}

void assign_function__LowState__eeforce(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_legged_msgs::msg::Cartesian *>(
    get_function__LowState__eeforce(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_legged_msgs::msg::Cartesian *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LowState_message_member_array[20] = {
  {
    "head",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, head),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__head,  // size() function pointer
    get_const_function__LowState__head,  // get_const(index) function pointer
    get_function__LowState__head,  // get(index) function pointer
    fetch_function__LowState__head,  // fetch(index, &value) function pointer
    assign_function__LowState__head,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, levelflag),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, framereserve),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, sn),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__sn,  // size() function pointer
    get_const_function__LowState__sn,  // get_const(index) function pointer
    get_function__LowState__sn,  // get(index) function pointer
    fetch_function__LowState__sn,  // fetch(index, &value) function pointer
    assign_function__LowState__sn,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, version),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__version,  // size() function pointer
    get_const_function__LowState__version,  // get_const(index) function pointer
    get_function__LowState__version,  // get(index) function pointer
    fetch_function__LowState__version,  // fetch(index, &value) function pointer
    assign_function__LowState__version,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, bandwidth),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, imu),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, motorstate),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__motorstate,  // size() function pointer
    get_const_function__LowState__motorstate,  // get_const(index) function pointer
    get_function__LowState__motorstate,  // get(index) function pointer
    fetch_function__LowState__motorstate,  // fetch(index, &value) function pointer
    assign_function__LowState__motorstate,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, bms),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, footforce),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__footforce,  // size() function pointer
    get_const_function__LowState__footforce,  // get_const(index) function pointer
    get_function__LowState__footforce,  // get(index) function pointer
    fetch_function__LowState__footforce,  // fetch(index, &value) function pointer
    assign_function__LowState__footforce,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, footforceest),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__footforceest,  // size() function pointer
    get_const_function__LowState__footforceest,  // get_const(index) function pointer
    get_function__LowState__footforceest,  // get(index) function pointer
    fetch_function__LowState__footforceest,  // fetch(index, &value) function pointer
    assign_function__LowState__footforceest,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tick",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, tick),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, wirelessremote),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__wirelessremote,  // size() function pointer
    get_const_function__LowState__wirelessremote,  // get_const(index) function pointer
    get_function__LowState__wirelessremote,  // get(index) function pointer
    fetch_function__LowState__wirelessremote,  // fetch(index, &value) function pointer
    assign_function__LowState__wirelessremote,  // assign(index, value) function pointer
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
    offsetof(unitree_legged_msgs::msg::LowState, reserve),  // bytes offset in struct
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
    offsetof(unitree_legged_msgs::msg::LowState, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "eeforceraw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, eeforceraw),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__eeforceraw,  // size() function pointer
    get_const_function__LowState__eeforceraw,  // get_const(index) function pointer
    get_function__LowState__eeforceraw,  // get(index) function pointer
    fetch_function__LowState__eeforceraw,  // fetch(index, &value) function pointer
    assign_function__LowState__eeforceraw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "eeforce",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, eeforce),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__eeforce,  // size() function pointer
    get_const_function__LowState__eeforce,  // get_const(index) function pointer
    get_function__LowState__eeforce,  // get(index) function pointer
    fetch_function__LowState__eeforce,  // fetch(index, &value) function pointer
    assign_function__LowState__eeforce,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, position),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_w",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_legged_msgs::msg::Cartesian>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs::msg::LowState, velocity_w),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowState_message_members = {
  "unitree_legged_msgs::msg",  // message namespace
  "LowState",  // message name
  20,  // number of fields
  sizeof(unitree_legged_msgs::msg::LowState),
  LowState_message_member_array,  // message members
  LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowState_message_members,
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
get_message_type_support_handle<unitree_legged_msgs::msg::LowState>()
{
  return &::unitree_legged_msgs::msg::rosidl_typesupport_introspection_cpp::LowState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_legged_msgs, msg, LowState)() {
  return &::unitree_legged_msgs::msg::rosidl_typesupport_introspection_cpp::LowState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
