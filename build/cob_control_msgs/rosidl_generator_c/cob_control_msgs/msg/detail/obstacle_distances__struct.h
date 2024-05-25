// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_H_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'distances'
#include "cob_control_msgs/msg/detail/obstacle_distance__struct.h"

/// Struct defined in msg/ObstacleDistances in the package cob_control_msgs.
typedef struct cob_control_msgs__msg__ObstacleDistances
{
  cob_control_msgs__msg__ObstacleDistance__Sequence distances;
} cob_control_msgs__msg__ObstacleDistances;

// Struct for a sequence of cob_control_msgs__msg__ObstacleDistances.
typedef struct cob_control_msgs__msg__ObstacleDistances__Sequence
{
  cob_control_msgs__msg__ObstacleDistances * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_control_msgs__msg__ObstacleDistances__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_H_
