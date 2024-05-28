// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice

#ifndef ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__STRUCT_H_
#define ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeDirectory in the package arena_evaluation_msgs.
typedef struct arena_evaluation_msgs__srv__ChangeDirectory_Request
{
  rosidl_runtime_c__String data;
} arena_evaluation_msgs__srv__ChangeDirectory_Request;

// Struct for a sequence of arena_evaluation_msgs__srv__ChangeDirectory_Request.
typedef struct arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence
{
  arena_evaluation_msgs__srv__ChangeDirectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChangeDirectory in the package arena_evaluation_msgs.
typedef struct arena_evaluation_msgs__srv__ChangeDirectory_Response
{
  bool result;
} arena_evaluation_msgs__srv__ChangeDirectory_Response;

// Struct for a sequence of arena_evaluation_msgs__srv__ChangeDirectory_Response.
typedef struct arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence
{
  arena_evaluation_msgs__srv__ChangeDirectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__STRUCT_H_
