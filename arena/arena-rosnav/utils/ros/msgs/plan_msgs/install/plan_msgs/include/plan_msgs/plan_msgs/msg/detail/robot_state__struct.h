// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plan_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef PLAN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define PLAN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/RobotState in the package plan_msgs.
typedef struct plan_msgs__msg__RobotState
{
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
} plan_msgs__msg__RobotState;

// Struct for a sequence of plan_msgs__msg__RobotState.
typedef struct plan_msgs__msg__RobotState__Sequence
{
  plan_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plan_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLAN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_