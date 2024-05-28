// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__struct.h"
// Member 'motorstate'
#include "unitree_legged_msgs/msg/detail/motor_state__struct.h"
// Member 'bms'
#include "unitree_legged_msgs/msg/detail/bms_state__struct.h"
// Member 'footposition2body'
// Member 'footspeed2body'
#include "unitree_legged_msgs/msg/detail/cartesian__struct.h"

/// Struct defined in msg/HighState in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__HighState
{
  uint8_t head[2];
  uint8_t levelflag;
  uint8_t framereserve;
  uint32_t sn[2];
  uint32_t version[2];
  uint16_t bandwidth;
  unitree_legged_msgs__msg__IMU imu;
  unitree_legged_msgs__msg__MotorState motorstate[20];
  unitree_legged_msgs__msg__BmsState bms;
  int16_t footforce[4];
  int16_t footforceest[4];
  uint8_t mode;
  float progress;
  uint8_t gaittype;
  float footraiseheight;
  float position[3];
  float bodyheight;
  float velocity[3];
  float yawspeed;
  float rangeobstacle[4];
  unitree_legged_msgs__msg__Cartesian footposition2body[4];
  unitree_legged_msgs__msg__Cartesian footspeed2body[4];
  uint8_t wirelessremote[40];
  uint32_t reserve;
  uint32_t crc;
} unitree_legged_msgs__msg__HighState;

// Struct for a sequence of unitree_legged_msgs__msg__HighState.
typedef struct unitree_legged_msgs__msg__HighState__Sequence
{
  unitree_legged_msgs__msg__HighState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__HighState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_
