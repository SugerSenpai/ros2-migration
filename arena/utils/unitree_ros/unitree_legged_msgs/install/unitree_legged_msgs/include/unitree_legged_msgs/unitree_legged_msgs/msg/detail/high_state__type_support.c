// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_legged_msgs/msg/detail/high_state__rosidl_typesupport_introspection_c.h"
#include "unitree_legged_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_legged_msgs/msg/detail/high_state__functions.h"
#include "unitree_legged_msgs/msg/detail/high_state__struct.h"


// Include directives for member types
// Member `imu`
#include "unitree_legged_msgs/msg/imu.h"
// Member `imu`
#include "unitree_legged_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `motorstate`
#include "unitree_legged_msgs/msg/motor_state.h"
// Member `motorstate`
#include "unitree_legged_msgs/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
// Member `bms`
#include "unitree_legged_msgs/msg/bms_state.h"
// Member `bms`
#include "unitree_legged_msgs/msg/detail/bms_state__rosidl_typesupport_introspection_c.h"
// Member `footposition2body`
// Member `footspeed2body`
#include "unitree_legged_msgs/msg/cartesian.h"
// Member `footposition2body`
// Member `footspeed2body`
#include "unitree_legged_msgs/msg/detail/cartesian__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_legged_msgs__msg__HighState__init(message_memory);
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_fini_function(void * message_memory)
{
  unitree_legged_msgs__msg__HighState__fini(message_memory);
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__head(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__head(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__head(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__head(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__head(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__head(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__head(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__sn(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__sn(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__sn(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__sn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__sn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__sn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__sn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__version(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__version(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__version(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__version(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__version(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__motorstate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__motorstate(
  const void * untyped_member, size_t index)
{
  const unitree_legged_msgs__msg__MotorState * member =
    (const unitree_legged_msgs__msg__MotorState *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__motorstate(
  void * untyped_member, size_t index)
{
  unitree_legged_msgs__msg__MotorState * member =
    (unitree_legged_msgs__msg__MotorState *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__motorstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_legged_msgs__msg__MotorState * item =
    ((const unitree_legged_msgs__msg__MotorState *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__motorstate(untyped_member, index));
  unitree_legged_msgs__msg__MotorState * value =
    (unitree_legged_msgs__msg__MotorState *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__motorstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_legged_msgs__msg__MotorState * item =
    ((unitree_legged_msgs__msg__MotorState *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__motorstate(untyped_member, index));
  const unitree_legged_msgs__msg__MotorState * value =
    (const unitree_legged_msgs__msg__MotorState *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footforce(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforce(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforce(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footforce(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforce(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footforce(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforce(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footforceest(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforceest(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforceest(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footforceest(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforceest(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footforceest(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforceest(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__rangeobstacle(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__rangeobstacle(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__rangeobstacle(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__rangeobstacle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__rangeobstacle(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__rangeobstacle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__rangeobstacle(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footposition2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footposition2body(
  const void * untyped_member, size_t index)
{
  const unitree_legged_msgs__msg__Cartesian * member =
    (const unitree_legged_msgs__msg__Cartesian *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footposition2body(
  void * untyped_member, size_t index)
{
  unitree_legged_msgs__msg__Cartesian * member =
    (unitree_legged_msgs__msg__Cartesian *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footposition2body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_legged_msgs__msg__Cartesian * item =
    ((const unitree_legged_msgs__msg__Cartesian *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footposition2body(untyped_member, index));
  unitree_legged_msgs__msg__Cartesian * value =
    (unitree_legged_msgs__msg__Cartesian *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footposition2body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_legged_msgs__msg__Cartesian * item =
    ((unitree_legged_msgs__msg__Cartesian *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footposition2body(untyped_member, index));
  const unitree_legged_msgs__msg__Cartesian * value =
    (const unitree_legged_msgs__msg__Cartesian *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footspeed2body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footspeed2body(
  const void * untyped_member, size_t index)
{
  const unitree_legged_msgs__msg__Cartesian * member =
    (const unitree_legged_msgs__msg__Cartesian *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footspeed2body(
  void * untyped_member, size_t index)
{
  unitree_legged_msgs__msg__Cartesian * member =
    (unitree_legged_msgs__msg__Cartesian *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footspeed2body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_legged_msgs__msg__Cartesian * item =
    ((const unitree_legged_msgs__msg__Cartesian *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footspeed2body(untyped_member, index));
  unitree_legged_msgs__msg__Cartesian * value =
    (unitree_legged_msgs__msg__Cartesian *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footspeed2body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_legged_msgs__msg__Cartesian * item =
    ((unitree_legged_msgs__msg__Cartesian *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footspeed2body(untyped_member, index));
  const unitree_legged_msgs__msg__Cartesian * value =
    (const unitree_legged_msgs__msg__Cartesian *)(untyped_value);
  *item = *value;
}

size_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__wirelessremote(
  const void * untyped_member)
{
  (void)untyped_member;
  return 40;
}

const void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__wirelessremote(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__wirelessremote(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__wirelessremote(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__wirelessremote(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__wirelessremote(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__wirelessremote(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[25] = {
  {
    "head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, head),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__head,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__head,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__head,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__head,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__head,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "levelflag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, levelflag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "framereserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, framereserve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, sn),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__sn,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__sn,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__sn,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__sn,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__sn,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, version),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__version,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__version,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__version,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__version,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__version,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bandwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, bandwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motorstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, motorstate),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__motorstate,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__motorstate,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__motorstate,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__motorstate,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__motorstate,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, bms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforce",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, footforce),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footforce,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforce,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforce,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footforce,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footforce,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footforceest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, footforceest),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footforceest,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footforceest,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footforceest,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footforceest,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footforceest,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gaittype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, gaittype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footraiseheight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, footraiseheight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, position),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__position,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__position,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__position,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__position,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bodyheight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, bodyheight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, velocity),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__velocity,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__velocity,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__velocity,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__velocity,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yawspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, yawspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rangeobstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, rangeobstacle),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__rangeobstacle,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__rangeobstacle,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__rangeobstacle,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__rangeobstacle,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__rangeobstacle,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footposition2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, footposition2body),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footposition2body,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footposition2body,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footposition2body,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footposition2body,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footposition2body,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "footspeed2body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, footspeed2body),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__footspeed2body,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__footspeed2body,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__footspeed2body,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__footspeed2body,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__footspeed2body,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wirelessremote",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    40,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, wirelessremote),  // bytes offset in struct
    NULL,  // default value
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__size_function__HighState__wirelessremote,  // size() function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_const_function__HighState__wirelessremote,  // get_const(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__get_function__HighState__wirelessremote,  // get(index) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__fetch_function__HighState__wirelessremote,  // fetch(index, &value) function pointer
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__assign_function__HighState__wirelessremote,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, reserve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_legged_msgs__msg__HighState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_members = {
  "unitree_legged_msgs__msg",  // message namespace
  "HighState",  // message name
  25,  // number of fields
  sizeof(unitree_legged_msgs__msg__HighState),
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array,  // message members
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle = {
  0,
  &unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_legged_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, HighState)() {
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, IMU)();
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, MotorState)();
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, BmsState)();
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, Cartesian)();
  unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_legged_msgs, msg, Cartesian)();
  if (!unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle.typesupport_identifier) {
    unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_legged_msgs__msg__HighState__rosidl_typesupport_introspection_c__HighState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
