// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_srvs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__DOCK__STRUCT_H_
#define COB_SRVS__SRV__DETAIL__DOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
// Member 'stop_topic'
// Member 'stop_message_field'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/Dock in the package cob_srvs.
typedef struct cob_srvs__srv__Dock_Request
{
  rosidl_runtime_c__String frame_id;
  geometry_msgs__msg__Pose__Sequence poses;
  rosidl_runtime_c__String stop_topic;
  rosidl_runtime_c__String stop_message_field;
  bool stop_compare_value;
  float dist_threshold;
} cob_srvs__srv__Dock_Request;

// Struct for a sequence of cob_srvs__srv__Dock_Request.
typedef struct cob_srvs__srv__Dock_Request__Sequence
{
  cob_srvs__srv__Dock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__Dock_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Dock in the package cob_srvs.
typedef struct cob_srvs__srv__Dock_Response
{
  bool success;
  rosidl_runtime_c__String message;
} cob_srvs__srv__Dock_Response;

// Struct for a sequence of cob_srvs__srv__Dock_Response.
typedef struct cob_srvs__srv__Dock_Response__Sequence
{
  cob_srvs__srv__Dock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__Dock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_SRVS__SRV__DETAIL__DOCK__STRUCT_H_
