// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice
#include "arena_evaluation_msgs/srv/detail/change_directory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__init(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(msg);
    return false;
  }
  return true;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Request * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Request * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

arena_evaluation_msgs__srv__ChangeDirectory_Request *
arena_evaluation_msgs__srv__ChangeDirectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Request * msg = (arena_evaluation_msgs__srv__ChangeDirectory_Request *)allocator.allocate(sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Request));
  bool success = arena_evaluation_msgs__srv__ChangeDirectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Request__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__init(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Request * data = NULL;

  if (size) {
    data = (arena_evaluation_msgs__srv__ChangeDirectory_Request *)allocator.zero_allocate(size, sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arena_evaluation_msgs__srv__ChangeDirectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__fini(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence *
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array = (arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence *)allocator.allocate(sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arena_evaluation_msgs__srv__ChangeDirectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arena_evaluation_msgs__srv__ChangeDirectory_Request * data =
      (arena_evaluation_msgs__srv__ChangeDirectory_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arena_evaluation_msgs__srv__ChangeDirectory_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arena_evaluation_msgs__srv__ChangeDirectory_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arena_evaluation_msgs__srv__ChangeDirectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__init(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Response * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Response * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

arena_evaluation_msgs__srv__ChangeDirectory_Response *
arena_evaluation_msgs__srv__ChangeDirectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Response * msg = (arena_evaluation_msgs__srv__ChangeDirectory_Response *)allocator.allocate(sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Response));
  bool success = arena_evaluation_msgs__srv__ChangeDirectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Response__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__init(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Response * data = NULL;

  if (size) {
    data = (arena_evaluation_msgs__srv__ChangeDirectory_Response *)allocator.zero_allocate(size, sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arena_evaluation_msgs__srv__ChangeDirectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__fini(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence *
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array = (arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence *)allocator.allocate(sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__destroy(arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__are_equal(const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * lhs, const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arena_evaluation_msgs__srv__ChangeDirectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence__copy(
  const arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * input,
  arena_evaluation_msgs__srv__ChangeDirectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arena_evaluation_msgs__srv__ChangeDirectory_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arena_evaluation_msgs__srv__ChangeDirectory_Response * data =
      (arena_evaluation_msgs__srv__ChangeDirectory_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arena_evaluation_msgs__srv__ChangeDirectory_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arena_evaluation_msgs__srv__ChangeDirectory_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arena_evaluation_msgs__srv__ChangeDirectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
