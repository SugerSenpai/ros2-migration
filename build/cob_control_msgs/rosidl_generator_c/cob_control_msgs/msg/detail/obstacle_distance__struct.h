// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_control_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_

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
#include "cob_control_msgs/msg/detail/header__struct.h"
// Member 'link_of_interest'
// Member 'obstacle_id'
#include "rosidl_runtime_c/string.h"
// Member 'frame_vector'
// Member 'nearest_point_frame_vector'
// Member 'nearest_point_obstacle_vector'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ObstacleDistance in the package cob_control_msgs.
typedef struct cob_control_msgs__msg__ObstacleDistance
{
  cob_control_msgs__msg__Header header;
  /// Collision pair consists of link of interest and obstacle
  /// Registration name of the link of interest
  rosidl_runtime_c__String link_of_interest;
  /// Registration name of the obstacle
  rosidl_runtime_c__String obstacle_id;
  /// distance between the nearest points on obstacle and link of interest
  double distance;
  /// Vector pointing to the origin of the link
  geometry_msgs__msg__Vector3 frame_vector;
  /// Vector pointing to the nearest point on the link collision geometry (e.g. mesh)
  geometry_msgs__msg__Vector3 nearest_point_frame_vector;
  /// Vector pointing to the nearest point on the obstacle collision geometry (e.g. mesh)
  geometry_msgs__msg__Vector3 nearest_point_obstacle_vector;
} cob_control_msgs__msg__ObstacleDistance;

// Struct for a sequence of cob_control_msgs__msg__ObstacleDistance.
typedef struct cob_control_msgs__msg__ObstacleDistance__Sequence
{
  cob_control_msgs__msg__ObstacleDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_control_msgs__msg__ObstacleDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
