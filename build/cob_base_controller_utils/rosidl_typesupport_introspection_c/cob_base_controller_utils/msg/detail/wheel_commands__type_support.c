// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cob_base_controller_utils/msg/detail/wheel_commands__rosidl_typesupport_introspection_c.h"
#include "cob_base_controller_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cob_base_controller_utils/msg/detail/wheel_commands__functions.h"
#include "cob_base_controller_utils/msg/detail/wheel_commands__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `drive_target_velocity`
// Member `steer_target_velocity`
// Member `steer_target_position`
// Member `steer_target_error`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cob_base_controller_utils__msg__WheelCommands__init(message_memory);
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_fini_function(void * message_memory)
{
  cob_base_controller_utils__msg__WheelCommands__fini(message_memory);
}

size_t cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__drive_target_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__drive_target_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__drive_target_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__drive_target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__drive_target_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__drive_target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__drive_target_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__drive_target_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_error(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_error(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_error(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_error(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils__msg__WheelCommands, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drive_target_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils__msg__WheelCommands, drive_target_velocity),  // bytes offset in struct
    NULL,  // default value
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__drive_target_velocity,  // size() function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__drive_target_velocity,  // get_const(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__drive_target_velocity,  // get(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__drive_target_velocity,  // fetch(index, &value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__drive_target_velocity,  // assign(index, value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__drive_target_velocity  // resize(index) function pointer
  },
  {
    "steer_target_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils__msg__WheelCommands, steer_target_velocity),  // bytes offset in struct
    NULL,  // default value
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_velocity,  // size() function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_velocity,  // get_const(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_velocity,  // get(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_velocity,  // fetch(index, &value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_velocity,  // assign(index, value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_velocity  // resize(index) function pointer
  },
  {
    "steer_target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils__msg__WheelCommands, steer_target_position),  // bytes offset in struct
    NULL,  // default value
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_position,  // size() function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_position,  // get_const(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_position,  // get(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_position,  // fetch(index, &value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_position,  // assign(index, value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_position  // resize(index) function pointer
  },
  {
    "steer_target_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_base_controller_utils__msg__WheelCommands, steer_target_error),  // bytes offset in struct
    NULL,  // default value
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__size_function__WheelCommands__steer_target_error,  // size() function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_const_function__WheelCommands__steer_target_error,  // get_const(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__get_function__WheelCommands__steer_target_error,  // get(index) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__fetch_function__WheelCommands__steer_target_error,  // fetch(index, &value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__assign_function__WheelCommands__steer_target_error,  // assign(index, value) function pointer
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__resize_function__WheelCommands__steer_target_error  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_members = {
  "cob_base_controller_utils__msg",  // message namespace
  "WheelCommands",  // message name
  5,  // number of fields
  sizeof(cob_base_controller_utils__msg__WheelCommands),
  cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_member_array,  // message members
  cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_type_support_handle = {
  0,
  &cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cob_base_controller_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cob_base_controller_utils, msg, WheelCommands)() {
  cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_type_support_handle.typesupport_identifier) {
    cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cob_base_controller_utils__msg__WheelCommands__rosidl_typesupport_introspection_c__WheelCommands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
