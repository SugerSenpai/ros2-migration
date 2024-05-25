// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cob_base_controller_utils/msg/detail/wheel_commands__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cob_base_controller_utils
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelCommands_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cob_base_controller_utils::msg::WheelCommands(_init);
}

void WheelCommands_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cob_base_controller_utils::msg::WheelCommands *>(message_memory);
  typed_message->~WheelCommands();
}

size_t size_function__WheelCommands__drive_target_velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelCommands__drive_target_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelCommands__drive_target_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelCommands__drive_target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelCommands__drive_target_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelCommands__drive_target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelCommands__drive_target_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelCommands__drive_target_velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WheelCommands__steer_target_velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelCommands__steer_target_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelCommands__steer_target_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelCommands__steer_target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelCommands__steer_target_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelCommands__steer_target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelCommands__steer_target_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelCommands__steer_target_velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WheelCommands__steer_target_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelCommands__steer_target_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelCommands__steer_target_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelCommands__steer_target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelCommands__steer_target_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelCommands__steer_target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelCommands__steer_target_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelCommands__steer_target_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WheelCommands__steer_target_error(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelCommands__steer_target_error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelCommands__steer_target_error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelCommands__steer_target_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelCommands__steer_target_error(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelCommands__steer_target_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelCommands__steer_target_error(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelCommands__steer_target_error(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelCommands_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils::msg::WheelCommands, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_target_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils::msg::WheelCommands, drive_target_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelCommands__drive_target_velocity,  // size() function pointer
    get_const_function__WheelCommands__drive_target_velocity,  // get_const(index) function pointer
    get_function__WheelCommands__drive_target_velocity,  // get(index) function pointer
    fetch_function__WheelCommands__drive_target_velocity,  // fetch(index, &value) function pointer
    assign_function__WheelCommands__drive_target_velocity,  // assign(index, value) function pointer
    resize_function__WheelCommands__drive_target_velocity  // resize(index) function pointer
  },
  {
    "steer_target_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils::msg::WheelCommands, steer_target_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelCommands__steer_target_velocity,  // size() function pointer
    get_const_function__WheelCommands__steer_target_velocity,  // get_const(index) function pointer
    get_function__WheelCommands__steer_target_velocity,  // get(index) function pointer
    fetch_function__WheelCommands__steer_target_velocity,  // fetch(index, &value) function pointer
    assign_function__WheelCommands__steer_target_velocity,  // assign(index, value) function pointer
    resize_function__WheelCommands__steer_target_velocity  // resize(index) function pointer
  },
  {
    "steer_target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils::msg::WheelCommands, steer_target_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelCommands__steer_target_position,  // size() function pointer
    get_const_function__WheelCommands__steer_target_position,  // get_const(index) function pointer
    get_function__WheelCommands__steer_target_position,  // get(index) function pointer
    fetch_function__WheelCommands__steer_target_position,  // fetch(index, &value) function pointer
    assign_function__WheelCommands__steer_target_position,  // assign(index, value) function pointer
    resize_function__WheelCommands__steer_target_position  // resize(index) function pointer
  },
  {
    "steer_target_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils::msg::WheelCommands, steer_target_error),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelCommands__steer_target_error,  // size() function pointer
    get_const_function__WheelCommands__steer_target_error,  // get_const(index) function pointer
    get_function__WheelCommands__steer_target_error,  // get(index) function pointer
    fetch_function__WheelCommands__steer_target_error,  // fetch(index, &value) function pointer
    assign_function__WheelCommands__steer_target_error,  // assign(index, value) function pointer
    resize_function__WheelCommands__steer_target_error  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelCommands_message_members = {
  "cob_base_controller_utils::msg",  // message namespace
  "WheelCommands",  // message name
  5,  // number of fields
  sizeof(cob_base_controller_utils::msg::WheelCommands),
  WheelCommands_message_member_array,  // message members
  WheelCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelCommands_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelCommands_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelCommands_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cob_base_controller_utils


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cob_base_controller_utils::msg::WheelCommands>()
{
  return &::cob_base_controller_utils::msg::rosidl_typesupport_introspection_cpp::WheelCommands_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cob_base_controller_utils, msg, WheelCommands)() {
  return &::cob_base_controller_utils::msg::rosidl_typesupport_introspection_cpp::WheelCommands_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
