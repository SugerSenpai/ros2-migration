// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice
#include "cob_control_msgs/msg/detail/obstacle_distances__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `distances`
#include "cob_control_msgs/msg/detail/obstacle_distance__functions.h"

bool
cob_control_msgs__msg__ObstacleDistances__init(cob_control_msgs__msg__ObstacleDistances * msg)
{
  if (!msg) {
    return false;
  }
  // distances
  if (!cob_control_msgs__msg__ObstacleDistance__Sequence__init(&msg->distances, 0)) {
    cob_control_msgs__msg__ObstacleDistances__fini(msg);
    return false;
  }
  return true;
}

void
cob_control_msgs__msg__ObstacleDistances__fini(cob_control_msgs__msg__ObstacleDistances * msg)
{
  if (!msg) {
    return;
  }
  // distances
  cob_control_msgs__msg__ObstacleDistance__Sequence__fini(&msg->distances);
}

bool
cob_control_msgs__msg__ObstacleDistances__are_equal(const cob_control_msgs__msg__ObstacleDistances * lhs, const cob_control_msgs__msg__ObstacleDistances * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distances
  if (!cob_control_msgs__msg__ObstacleDistance__Sequence__are_equal(
      &(lhs->distances), &(rhs->distances)))
  {
    return false;
  }
  return true;
}

bool
cob_control_msgs__msg__ObstacleDistances__copy(
  const cob_control_msgs__msg__ObstacleDistances * input,
  cob_control_msgs__msg__ObstacleDistances * output)
{
  if (!input || !output) {
    return false;
  }
  // distances
  if (!cob_control_msgs__msg__ObstacleDistance__Sequence__copy(
      &(input->distances), &(output->distances)))
  {
    return false;
  }
  return true;
}

cob_control_msgs__msg__ObstacleDistances *
cob_control_msgs__msg__ObstacleDistances__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistances * msg = (cob_control_msgs__msg__ObstacleDistances *)allocator.allocate(sizeof(cob_control_msgs__msg__ObstacleDistances), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_control_msgs__msg__ObstacleDistances));
  bool success = cob_control_msgs__msg__ObstacleDistances__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_control_msgs__msg__ObstacleDistances__destroy(cob_control_msgs__msg__ObstacleDistances * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_control_msgs__msg__ObstacleDistances__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_control_msgs__msg__ObstacleDistances__Sequence__init(cob_control_msgs__msg__ObstacleDistances__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistances * data = NULL;

  if (size) {
    data = (cob_control_msgs__msg__ObstacleDistances *)allocator.zero_allocate(size, sizeof(cob_control_msgs__msg__ObstacleDistances), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_control_msgs__msg__ObstacleDistances__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_control_msgs__msg__ObstacleDistances__fini(&data[i - 1]);
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
cob_control_msgs__msg__ObstacleDistances__Sequence__fini(cob_control_msgs__msg__ObstacleDistances__Sequence * array)
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
      cob_control_msgs__msg__ObstacleDistances__fini(&array->data[i]);
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

cob_control_msgs__msg__ObstacleDistances__Sequence *
cob_control_msgs__msg__ObstacleDistances__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistances__Sequence * array = (cob_control_msgs__msg__ObstacleDistances__Sequence *)allocator.allocate(sizeof(cob_control_msgs__msg__ObstacleDistances__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_control_msgs__msg__ObstacleDistances__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_control_msgs__msg__ObstacleDistances__Sequence__destroy(cob_control_msgs__msg__ObstacleDistances__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_control_msgs__msg__ObstacleDistances__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_control_msgs__msg__ObstacleDistances__Sequence__are_equal(const cob_control_msgs__msg__ObstacleDistances__Sequence * lhs, const cob_control_msgs__msg__ObstacleDistances__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_control_msgs__msg__ObstacleDistances__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_control_msgs__msg__ObstacleDistances__Sequence__copy(
  const cob_control_msgs__msg__ObstacleDistances__Sequence * input,
  cob_control_msgs__msg__ObstacleDistances__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_control_msgs__msg__ObstacleDistances);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_control_msgs__msg__ObstacleDistances * data =
      (cob_control_msgs__msg__ObstacleDistances *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_control_msgs__msg__ObstacleDistances__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_control_msgs__msg__ObstacleDistances__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_control_msgs__msg__ObstacleDistances__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
