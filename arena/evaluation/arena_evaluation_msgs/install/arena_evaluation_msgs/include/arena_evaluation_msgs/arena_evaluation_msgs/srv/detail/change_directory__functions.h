// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice

#ifndef ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__FUNCTIONS_H_
#define ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arena_evaluation_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "arena_evaluation_msgs/srv/detail/change_directory__struct.h"

/// Initialize srv/ChangeDirectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arena_evaluation_msgs__srv__ChangeDirectory_Request
 * )) before or use
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__init(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg);

/// Finalize srv/ChangeDirectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg);

/// Create srv/ChangeDirectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
arena_evaluation_msgs__srv__ChangeDirectory_Request *
arena_evaluation_msgs__srv__ChangeDirectory_Request__create();

/// Destroy srv/ChangeDirectory message.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Request__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg);

/// Check for srv/ChangeDirectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Request * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Request * rhs);

/// Copy a srv/ChangeDirectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Request * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Request * output);

/// Initialize array of srv/ChangeDirectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__init(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/ChangeDirectory messages.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__fini(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array);

/// Create array of srv/ChangeDirectory messages.
/**
 * It allocates the memory for the array and calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence *
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/ChangeDirectory messages.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array);

/// Check for srv/ChangeDirectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * rhs);

/// Copy an array of srv/ChangeDirectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * output);

/// Initialize srv/ChangeDirectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arena_evaluation_msgs__srv__ChangeDirectory_Response
 * )) before or use
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__init(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg);

/// Finalize srv/ChangeDirectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg);

/// Create srv/ChangeDirectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
arena_evaluation_msgs__srv__ChangeDirectory_Response *
arena_evaluation_msgs__srv__ChangeDirectory_Response__create();

/// Destroy srv/ChangeDirectory message.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Response__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg);

/// Check for srv/ChangeDirectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Response * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Response * rhs);

/// Copy a srv/ChangeDirectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Response * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Response * output);

/// Initialize array of srv/ChangeDirectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__init(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/ChangeDirectory messages.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__fini(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array);

/// Create array of srv/ChangeDirectory messages.
/**
 * It allocates the memory for the array and calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence *
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/ChangeDirectory messages.
/**
 * It calls
 * arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
void
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array);

/// Check for srv/ChangeDirectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * rhs);

/// Copy an array of srv/ChangeDirectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_arena_evaluation_msgs
bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__FUNCTIONS_H_
