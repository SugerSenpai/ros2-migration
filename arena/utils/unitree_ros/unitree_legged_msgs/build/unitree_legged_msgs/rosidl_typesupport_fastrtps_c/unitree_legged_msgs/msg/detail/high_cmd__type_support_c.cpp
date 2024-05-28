// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/high_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_legged_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_legged_msgs/msg/detail/high_cmd__struct.h"
#include "unitree_legged_msgs/msg/detail/high_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "unitree_legged_msgs/msg/detail/bms_cmd__functions.h"  // bms
#include "unitree_legged_msgs/msg/detail/led__functions.h"  // led

// forward declare type support functions
size_t get_serialized_size_unitree_legged_msgs__msg__BmsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_legged_msgs__msg__BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, BmsCmd)();
size_t get_serialized_size_unitree_legged_msgs__msg__LED(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_legged_msgs__msg__LED(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, LED)();


using _HighCmd__ros_msg_type = unitree_legged_msgs__msg__HighCmd;

static bool _HighCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HighCmd__ros_msg_type * ros_message = static_cast<const _HighCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: head
  {
    size_t size = 2;
    auto array_ptr = ros_message->head;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: levelflag
  {
    cdr << ros_message->levelflag;
  }

  // Field name: framereserve
  {
    cdr << ros_message->framereserve;
  }

  // Field name: sn
  {
    size_t size = 2;
    auto array_ptr = ros_message->sn;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bandwidth
  {
    cdr << ros_message->bandwidth;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gaittype
  {
    cdr << ros_message->gaittype;
  }

  // Field name: speedlevel
  {
    cdr << ros_message->speedlevel;
  }

  // Field name: footraiseheight
  {
    cdr << ros_message->footraiseheight;
  }

  // Field name: bodyheight
  {
    cdr << ros_message->bodyheight;
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: euler
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yawspeed
  {
    cdr << ros_message->yawspeed;
  }

  // Field name: bms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, BmsCmd
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bms, cdr))
    {
      return false;
    }
  }

  // Field name: led
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, LED
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->led;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reserve
  {
    cdr << ros_message->reserve;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  return true;
}

static bool _HighCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HighCmd__ros_msg_type * ros_message = static_cast<_HighCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: head
  {
    size_t size = 2;
    auto array_ptr = ros_message->head;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: levelflag
  {
    cdr >> ros_message->levelflag;
  }

  // Field name: framereserve
  {
    cdr >> ros_message->framereserve;
  }

  // Field name: sn
  {
    size_t size = 2;
    auto array_ptr = ros_message->sn;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: version
  {
    size_t size = 2;
    auto array_ptr = ros_message->version;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bandwidth
  {
    cdr >> ros_message->bandwidth;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: gaittype
  {
    cdr >> ros_message->gaittype;
  }

  // Field name: speedlevel
  {
    cdr >> ros_message->speedlevel;
  }

  // Field name: footraiseheight
  {
    cdr >> ros_message->footraiseheight;
  }

  // Field name: bodyheight
  {
    cdr >> ros_message->bodyheight;
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: euler
  {
    size_t size = 3;
    auto array_ptr = ros_message->euler;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yawspeed
  {
    cdr >> ros_message->yawspeed;
  }

  // Field name: bms
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, BmsCmd
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bms))
    {
      return false;
    }
  }

  // Field name: led
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, LED
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->led;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: wirelessremote
  {
    size_t size = 40;
    auto array_ptr = ros_message->wirelessremote;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reserve
  {
    cdr >> ros_message->reserve;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_legged_msgs
size_t get_serialized_size_unitree_legged_msgs__msg__HighCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HighCmd__ros_msg_type * ros_message = static_cast<const _HighCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name head
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->head;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name levelflag
  {
    size_t item_size = sizeof(ros_message->levelflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name framereserve
  {
    size_t item_size = sizeof(ros_message->framereserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sn
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->sn;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name version
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->version;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bandwidth
  {
    size_t item_size = sizeof(ros_message->bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gaittype
  {
    size_t item_size = sizeof(ros_message->gaittype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speedlevel
  {
    size_t item_size = sizeof(ros_message->speedlevel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name footraiseheight
  {
    size_t item_size = sizeof(ros_message->footraiseheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bodyheight
  {
    size_t item_size = sizeof(ros_message->bodyheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name euler
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->euler;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawspeed
  {
    size_t item_size = sizeof(ros_message->yawspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms

  current_alignment += get_serialized_size_unitree_legged_msgs__msg__BmsCmd(
    &(ros_message->bms), current_alignment);
  // field.name led
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->led;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_unitree_legged_msgs__msg__LED(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name wirelessremote
  {
    size_t array_size = 40;
    auto array_ptr = ros_message->wirelessremote;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve
  {
    size_t item_size = sizeof(ros_message->reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HighCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_legged_msgs__msg__HighCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_legged_msgs
size_t max_serialized_size_unitree_legged_msgs__msg__HighCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: head
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: levelflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: framereserve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sn
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: version
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bandwidth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gaittype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speedlevel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: footraiseheight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bodyheight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: euler
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yawspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bms
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_legged_msgs__msg__BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: led
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unitree_legged_msgs__msg__LED(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wirelessremote
  {
    size_t array_size = 40;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unitree_legged_msgs__msg__HighCmd;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HighCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unitree_legged_msgs__msg__HighCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HighCmd = {
  "unitree_legged_msgs::msg",
  "HighCmd",
  _HighCmd__cdr_serialize,
  _HighCmd__cdr_deserialize,
  _HighCmd__get_serialized_size,
  _HighCmd__max_serialized_size
};

static rosidl_message_type_support_t _HighCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HighCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, HighCmd)() {
  return &_HighCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
