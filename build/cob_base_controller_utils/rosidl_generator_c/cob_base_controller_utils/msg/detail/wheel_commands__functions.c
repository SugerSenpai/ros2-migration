// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice
#include "cob_base_controller_utils/msg/detail/wheel_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `drive_target_velocity`
// Member `steer_target_velocity`
// Member `steer_target_position`
// Member `steer_target_error`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cob_base_controller_utils__msg__WheelCommands__init(cob_base_controller_utils__msg__WheelCommands * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
    return false;
  }
  // drive_target_velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->drive_target_velocity, 0)) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
    return false;
  }
  // steer_target_velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_target_velocity, 0)) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
    return false;
  }
  // steer_target_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_target_position, 0)) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
    return false;
  }
  // steer_target_error
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_target_error, 0)) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
    return false;
  }
  return true;
}

void
cob_base_controller_utils__msg__WheelCommands__fini(cob_base_controller_utils__msg__WheelCommands * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drive_target_velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->drive_target_velocity);
  // steer_target_velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_target_velocity);
  // steer_target_position
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_target_position);
  // steer_target_error
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_target_error);
}

bool
cob_base_controller_utils__msg__WheelCommands__are_equal(const cob_base_controller_utils__msg__WheelCommands * lhs, const cob_base_controller_utils__msg__WheelCommands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // drive_target_velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->drive_target_velocity), &(rhs->drive_target_velocity)))
  {
    return false;
  }
  // steer_target_velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_target_velocity), &(rhs->steer_target_velocity)))
  {
    return false;
  }
  // steer_target_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_target_position), &(rhs->steer_target_position)))
  {
    return false;
  }
  // steer_target_error
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_target_error), &(rhs->steer_target_error)))
  {
    return false;
  }
  return true;
}

bool
cob_base_controller_utils__msg__WheelCommands__copy(
  const cob_base_controller_utils__msg__WheelCommands * input,
  cob_base_controller_utils__msg__WheelCommands * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // drive_target_velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->drive_target_velocity), &(output->drive_target_velocity)))
  {
    return false;
  }
  // steer_target_velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_target_velocity), &(output->steer_target_velocity)))
  {
    return false;
  }
  // steer_target_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_target_position), &(output->steer_target_position)))
  {
    return false;
  }
  // steer_target_error
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_target_error), &(output->steer_target_error)))
  {
    return false;
  }
  return true;
}

cob_base_controller_utils__msg__WheelCommands *
cob_base_controller_utils__msg__WheelCommands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_base_controller_utils__msg__WheelCommands * msg = (cob_base_controller_utils__msg__WheelCommands *)allocator.allocate(sizeof(cob_base_controller_utils__msg__WheelCommands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_base_controller_utils__msg__WheelCommands));
  bool success = cob_base_controller_utils__msg__WheelCommands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_base_controller_utils__msg__WheelCommands__destroy(cob_base_controller_utils__msg__WheelCommands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_base_controller_utils__msg__WheelCommands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_base_controller_utils__msg__WheelCommands__Sequence__init(cob_base_controller_utils__msg__WheelCommands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_base_controller_utils__msg__WheelCommands * data = NULL;

  if (size) {
    data = (cob_base_controller_utils__msg__WheelCommands *)allocator.zero_allocate(size, sizeof(cob_base_controller_utils__msg__WheelCommands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_base_controller_utils__msg__WheelCommands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_base_controller_utils__msg__WheelCommands__fini(&data[i - 1]);
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
cob_base_controller_utils__msg__WheelCommands__Sequence__fini(cob_base_controller_utils__msg__WheelCommands__Sequence * array)
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
      cob_base_controller_utils__msg__WheelCommands__fini(&array->data[i]);
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

cob_base_controller_utils__msg__WheelCommands__Sequence *
cob_base_controller_utils__msg__WheelCommands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_base_controller_utils__msg__WheelCommands__Sequence * array = (cob_base_controller_utils__msg__WheelCommands__Sequence *)allocator.allocate(sizeof(cob_base_controller_utils__msg__WheelCommands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_base_controller_utils__msg__WheelCommands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_base_controller_utils__msg__WheelCommands__Sequence__destroy(cob_base_controller_utils__msg__WheelCommands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_base_controller_utils__msg__WheelCommands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_base_controller_utils__msg__WheelCommands__Sequence__are_equal(const cob_base_controller_utils__msg__WheelCommands__Sequence * lhs, const cob_base_controller_utils__msg__WheelCommands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_base_controller_utils__msg__WheelCommands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_base_controller_utils__msg__WheelCommands__Sequence__copy(
  const cob_base_controller_utils__msg__WheelCommands__Sequence * input,
  cob_base_controller_utils__msg__WheelCommands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_base_controller_utils__msg__WheelCommands);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_base_controller_utils__msg__WheelCommands * data =
      (cob_base_controller_utils__msg__WheelCommands *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_base_controller_utils__msg__WheelCommands__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_base_controller_utils__msg__WheelCommands__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_base_controller_utils__msg__WheelCommands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
