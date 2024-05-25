// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cob_srvs:srv/SetInt.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_H_
#define COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetInt in the package cob_srvs.
typedef struct cob_srvs__srv__SetInt_Request
{
  int32_t data;
} cob_srvs__srv__SetInt_Request;

// Struct for a sequence of cob_srvs__srv__SetInt_Request.
typedef struct cob_srvs__srv__SetInt_Request__Sequence
{
  cob_srvs__srv__SetInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__SetInt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetInt in the package cob_srvs.
typedef struct cob_srvs__srv__SetInt_Response
{
  bool success;
  rosidl_runtime_c__String message;
} cob_srvs__srv__SetInt_Response;

// Struct for a sequence of cob_srvs__srv__SetInt_Response.
typedef struct cob_srvs__srv__SetInt_Response__Sequence
{
  cob_srvs__srv__SetInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cob_srvs__srv__SetInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_H_
