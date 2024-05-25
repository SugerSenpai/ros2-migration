// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__FUNCTIONS_H_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cob_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cob_control_msgs/msg/detail/obstacle_distances__struct.h"

/// Initialize msg/ObstacleDistances message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cob_control_msgs__msg__ObstacleDistances
 * )) before or use
 * cob_control_msgs__msg__ObstacleDistances__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__init(cob_control_msgs__msg__ObstacleDistances * msg);

/// Finalize msg/ObstacleDistances message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
void
cob_control_msgs__msg__ObstacleDistances__fini(cob_control_msgs__msg__ObstacleDistances * msg);

/// Create msg/ObstacleDistances message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cob_control_msgs__msg__ObstacleDistances__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
cob_control_msgs__msg__ObstacleDistances *
cob_control_msgs__msg__ObstacleDistances__create();

/// Destroy msg/ObstacleDistances message.
/**
 * It calls
 * cob_control_msgs__msg__ObstacleDistances__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
void
cob_control_msgs__msg__ObstacleDistances__destroy(cob_control_msgs__msg__ObstacleDistances * msg);

/// Check for msg/ObstacleDistances message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__are_equal(const cob_control_msgs__msg__ObstacleDistances * lhs, const cob_control_msgs__msg__ObstacleDistances * rhs);

/// Copy a msg/ObstacleDistances message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__copy(
  const cob_control_msgs__msg__ObstacleDistances * input,
  cob_control_msgs__msg__ObstacleDistances * output);

/// Initialize array of msg/ObstacleDistances messages.
/**
 * It allocates the memory for the number of elements and calls
 * cob_control_msgs__msg__ObstacleDistances__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__Sequence__init(cob_control_msgs__msg__ObstacleDistances__Sequence * array, size_t size);

/// Finalize array of msg/ObstacleDistances messages.
/**
 * It calls
 * cob_control_msgs__msg__ObstacleDistances__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
void
cob_control_msgs__msg__ObstacleDistances__Sequence__fini(cob_control_msgs__msg__ObstacleDistances__Sequence * array);

/// Create array of msg/ObstacleDistances messages.
/**
 * It allocates the memory for the array and calls
 * cob_control_msgs__msg__ObstacleDistances__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
cob_control_msgs__msg__ObstacleDistances__Sequence *
cob_control_msgs__msg__ObstacleDistances__Sequence__create(size_t size);

/// Destroy array of msg/ObstacleDistances messages.
/**
 * It calls
 * cob_control_msgs__msg__ObstacleDistances__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
void
cob_control_msgs__msg__ObstacleDistances__Sequence__destroy(cob_control_msgs__msg__ObstacleDistances__Sequence * array);

/// Check for msg/ObstacleDistances message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__Sequence__are_equal(const cob_control_msgs__msg__ObstacleDistances__Sequence * lhs, const cob_control_msgs__msg__ObstacleDistances__Sequence * rhs);

/// Copy an array of msg/ObstacleDistances messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cob_control_msgs
bool
cob_control_msgs__msg__ObstacleDistances__Sequence__copy(
  const cob_control_msgs__msg__ObstacleDistances__Sequence * input,
  cob_control_msgs__msg__ObstacleDistances__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__FUNCTIONS_H_
