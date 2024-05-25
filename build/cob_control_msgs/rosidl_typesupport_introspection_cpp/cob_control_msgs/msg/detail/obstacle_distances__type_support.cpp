// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cob_control_msgs/msg/detail/obstacle_distances__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cob_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObstacleDistances_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cob_control_msgs::msg::ObstacleDistances(_init);
}

void ObstacleDistances_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cob_control_msgs::msg::ObstacleDistances *>(message_memory);
  typed_message->~ObstacleDistances();
}

size_t size_function__ObstacleDistances__distances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cob_control_msgs::msg::ObstacleDistance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleDistances__distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cob_control_msgs::msg::ObstacleDistance> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleDistances__distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cob_control_msgs::msg::ObstacleDistance> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleDistances__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cob_control_msgs::msg::ObstacleDistance *>(
    get_const_function__ObstacleDistances__distances(untyped_member, index));
  auto & value = *reinterpret_cast<cob_control_msgs::msg::ObstacleDistance *>(untyped_value);
  value = item;
}

void assign_function__ObstacleDistances__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cob_control_msgs::msg::ObstacleDistance *>(
    get_function__ObstacleDistances__distances(untyped_member, index));
  const auto & value = *reinterpret_cast<const cob_control_msgs::msg::ObstacleDistance *>(untyped_value);
  item = value;
}

void resize_function__ObstacleDistances__distances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cob_control_msgs::msg::ObstacleDistance> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObstacleDistances_message_member_array[1] = {
  {
    "distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cob_control_msgs::msg::ObstacleDistance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_control_msgs::msg::ObstacleDistances, distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleDistances__distances,  // size() function pointer
    get_const_function__ObstacleDistances__distances,  // get_const(index) function pointer
    get_function__ObstacleDistances__distances,  // get(index) function pointer
    fetch_function__ObstacleDistances__distances,  // fetch(index, &value) function pointer
    assign_function__ObstacleDistances__distances,  // assign(index, value) function pointer
    resize_function__ObstacleDistances__distances  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObstacleDistances_message_members = {
  "cob_control_msgs::msg",  // message namespace
  "ObstacleDistances",  // message name
  1,  // number of fields
  sizeof(cob_control_msgs::msg::ObstacleDistances),
  ObstacleDistances_message_member_array,  // message members
  ObstacleDistances_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleDistances_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObstacleDistances_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObstacleDistances_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cob_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cob_control_msgs::msg::ObstacleDistances>()
{
  return &::cob_control_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleDistances_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cob_control_msgs, msg, ObstacleDistances)() {
  return &::cob_control_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleDistances_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
