// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#ifndef COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_H_
#define COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'drive_target_velocity'
// Member 'steer_target_velocity'
// Member 'steer_target_position'
// Member 'steer_target_error'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WheelCommands in the package cob_base_controller_utils.
typedef struct cob_base_controller_utils__msg__WheelCommands
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence drive_target_velocity;
  rosidl_runtime_c__double__Sequence steer_target_velocity;
  rosidl_runtime_c__double__Sequence steer_target_position;
  rosidl_runtime_c__double__Sequence steer_target_error;
} cob_base_controller_utils__msg__WheelCommands;

// Struct for a sequence of cob_base_controller_utils__msg__WheelCommands.
typedef struct cob_base_controller_utils__msg__WheelCommands__Sequence
{
  cob_base_controller_utils__msg__WheelCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_base_controller_utils__msg__WheelCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_H_
