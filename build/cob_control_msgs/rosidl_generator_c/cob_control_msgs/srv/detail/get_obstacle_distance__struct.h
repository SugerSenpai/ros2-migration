// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_H_
#define COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'links'
// Member 'objects'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetObstacleDistance in the package cob_control_msgs.
typedef struct cob_control_msgs__srv__GetObstacleDistance_Request
{
  rosidl_runtime_c__String__Sequence links;
  rosidl_runtime_c__String__Sequence objects;
} cob_control_msgs__srv__GetObstacleDistance_Request;

// Struct for a sequence of cob_control_msgs__srv__GetObstacleDistance_Request.
typedef struct cob_control_msgs__srv__GetObstacleDistance_Request__Sequence
{
  cob_control_msgs__srv__GetObstacleDistance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_control_msgs__srv__GetObstacleDistance_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'link_to_object'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'distances'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetObstacleDistance in the package cob_control_msgs.
typedef struct cob_control_msgs__srv__GetObstacleDistance_Response
{
  rosidl_runtime_c__String__Sequence link_to_object;
  rosidl_runtime_c__double__Sequence distances;
} cob_control_msgs__srv__GetObstacleDistance_Response;

// Struct for a sequence of cob_control_msgs__srv__GetObstacleDistance_Response.
typedef struct cob_control_msgs__srv__GetObstacleDistance_Response__Sequence
{
  cob_control_msgs__srv__GetObstacleDistance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_control_msgs__srv__GetObstacleDistance_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_H_
