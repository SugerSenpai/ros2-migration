// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice
#include "cob_control_msgs/srv/detail/get_obstacle_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `links`
// Member `objects`
#include "rosidl_runtime_c/string_functions.h"

bool
cob_control_msgs__srv__GetObstacleDistance_Request__init(cob_control_msgs__srv__GetObstacleDistance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // links
  if (!rosidl_runtime_c__String__Sequence__init(&msg->links, 0)) {
    cob_control_msgs__srv__GetObstacleDistance_Request__fini(msg);
    return false;
  }
  // objects
  if (!rosidl_runtime_c__String__Sequence__init(&msg->objects, 0)) {
    cob_control_msgs__srv__GetObstacleDistance_Request__fini(msg);
    return false;
  }
  return true;
}

void
cob_control_msgs__srv__GetObstacleDistance_Request__fini(cob_control_msgs__srv__GetObstacleDistance_Request * msg)
{
  if (!msg) {
    return;
  }
  // links
  rosidl_runtime_c__String__Sequence__fini(&msg->links);
  // objects
  rosidl_runtime_c__String__Sequence__fini(&msg->objects);
}

bool
cob_control_msgs__srv__GetObstacleDistance_Request__are_equal(const cob_control_msgs__srv__GetObstacleDistance_Request * lhs, const cob_control_msgs__srv__GetObstacleDistance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // links
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // objects
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
cob_control_msgs__srv__GetObstacleDistance_Request__copy(
  const cob_control_msgs__srv__GetObstacleDistance_Request * input,
  cob_control_msgs__srv__GetObstacleDistance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // links
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // objects
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

cob_control_msgs__srv__GetObstacleDistance_Request *
cob_control_msgs__srv__GetObstacleDistance_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Request * msg = (cob_control_msgs__srv__GetObstacleDistance_Request *)allocator.allocate(sizeof(cob_control_msgs__srv__GetObstacleDistance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_control_msgs__srv__GetObstacleDistance_Request));
  bool success = cob_control_msgs__srv__GetObstacleDistance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_control_msgs__srv__GetObstacleDistance_Request__destroy(cob_control_msgs__srv__GetObstacleDistance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_control_msgs__srv__GetObstacleDistance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__init(cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Request * data = NULL;

  if (size) {
    data = (cob_control_msgs__srv__GetObstacleDistance_Request *)allocator.zero_allocate(size, sizeof(cob_control_msgs__srv__GetObstacleDistance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_control_msgs__srv__GetObstacleDistance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_control_msgs__srv__GetObstacleDistance_Request__fini(&data[i - 1]);
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
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__fini(cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * array)
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
      cob_control_msgs__srv__GetObstacleDistance_Request__fini(&array->data[i]);
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

cob_control_msgs__srv__GetObstacleDistance_Request__Sequence *
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * array = (cob_control_msgs__srv__GetObstacleDistance_Request__Sequence *)allocator.allocate(sizeof(cob_control_msgs__srv__GetObstacleDistance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__destroy(cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__are_equal(const cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * lhs, const cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_control_msgs__srv__GetObstacleDistance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_control_msgs__srv__GetObstacleDistance_Request__Sequence__copy(
  const cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * input,
  cob_control_msgs__srv__GetObstacleDistance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_control_msgs__srv__GetObstacleDistance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_control_msgs__srv__GetObstacleDistance_Request * data =
      (cob_control_msgs__srv__GetObstacleDistance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_control_msgs__srv__GetObstacleDistance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_control_msgs__srv__GetObstacleDistance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_control_msgs__srv__GetObstacleDistance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `link_to_object`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `distances`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cob_control_msgs__srv__GetObstacleDistance_Response__init(cob_control_msgs__srv__GetObstacleDistance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // link_to_object
  if (!rosidl_runtime_c__String__Sequence__init(&msg->link_to_object, 0)) {
    cob_control_msgs__srv__GetObstacleDistance_Response__fini(msg);
    return false;
  }
  // distances
  if (!rosidl_runtime_c__double__Sequence__init(&msg->distances, 0)) {
    cob_control_msgs__srv__GetObstacleDistance_Response__fini(msg);
    return false;
  }
  return true;
}

void
cob_control_msgs__srv__GetObstacleDistance_Response__fini(cob_control_msgs__srv__GetObstacleDistance_Response * msg)
{
  if (!msg) {
    return;
  }
  // link_to_object
  rosidl_runtime_c__String__Sequence__fini(&msg->link_to_object);
  // distances
  rosidl_runtime_c__double__Sequence__fini(&msg->distances);
}

bool
cob_control_msgs__srv__GetObstacleDistance_Response__are_equal(const cob_control_msgs__srv__GetObstacleDistance_Response * lhs, const cob_control_msgs__srv__GetObstacleDistance_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_to_object
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->link_to_object), &(rhs->link_to_object)))
  {
    return false;
  }
  // distances
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->distances), &(rhs->distances)))
  {
    return false;
  }
  return true;
}

bool
cob_control_msgs__srv__GetObstacleDistance_Response__copy(
  const cob_control_msgs__srv__GetObstacleDistance_Response * input,
  cob_control_msgs__srv__GetObstacleDistance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // link_to_object
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->link_to_object), &(output->link_to_object)))
  {
    return false;
  }
  // distances
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->distances), &(output->distances)))
  {
    return false;
  }
  return true;
}

cob_control_msgs__srv__GetObstacleDistance_Response *
cob_control_msgs__srv__GetObstacleDistance_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Response * msg = (cob_control_msgs__srv__GetObstacleDistance_Response *)allocator.allocate(sizeof(cob_control_msgs__srv__GetObstacleDistance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_control_msgs__srv__GetObstacleDistance_Response));
  bool success = cob_control_msgs__srv__GetObstacleDistance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_control_msgs__srv__GetObstacleDistance_Response__destroy(cob_control_msgs__srv__GetObstacleDistance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_control_msgs__srv__GetObstacleDistance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__init(cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Response * data = NULL;

  if (size) {
    data = (cob_control_msgs__srv__GetObstacleDistance_Response *)allocator.zero_allocate(size, sizeof(cob_control_msgs__srv__GetObstacleDistance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_control_msgs__srv__GetObstacleDistance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_control_msgs__srv__GetObstacleDistance_Response__fini(&data[i - 1]);
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
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__fini(cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * array)
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
      cob_control_msgs__srv__GetObstacleDistance_Response__fini(&array->data[i]);
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

cob_control_msgs__srv__GetObstacleDistance_Response__Sequence *
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * array = (cob_control_msgs__srv__GetObstacleDistance_Response__Sequence *)allocator.allocate(sizeof(cob_control_msgs__srv__GetObstacleDistance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__destroy(cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__are_equal(const cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * lhs, const cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_control_msgs__srv__GetObstacleDistance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_control_msgs__srv__GetObstacleDistance_Response__Sequence__copy(
  const cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * input,
  cob_control_msgs__srv__GetObstacleDistance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_control_msgs__srv__GetObstacleDistance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_control_msgs__srv__GetObstacleDistance_Response * data =
      (cob_control_msgs__srv__GetObstacleDistance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_control_msgs__srv__GetObstacleDistance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_control_msgs__srv__GetObstacleDistance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_control_msgs__srv__GetObstacleDistance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
