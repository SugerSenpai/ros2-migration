// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_srvs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__SET_FLOAT__STRUCT_H_
#define COB_SRVS__SRV__DETAIL__SET_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetFloat in the package cob_srvs.
typedef struct cob_srvs__srv__SetFloat_Request
{
  float data;
} cob_srvs__srv__SetFloat_Request;

// Struct for a sequence of cob_srvs__srv__SetFloat_Request.
typedef struct cob_srvs__srv__SetFloat_Request__Sequence
{
  cob_srvs__srv__SetFloat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__SetFloat_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetFloat in the package cob_srvs.
typedef struct cob_srvs__srv__SetFloat_Response
{
  bool success;
  rosidl_runtime_c__String message;
} cob_srvs__srv__SetFloat_Response;

// Struct for a sequence of cob_srvs__srv__SetFloat_Response.
typedef struct cob_srvs__srv__SetFloat_Response__Sequence
{
  cob_srvs__srv__SetFloat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__SetFloat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_SRVS__SRV__DETAIL__SET_FLOAT__STRUCT_H_
