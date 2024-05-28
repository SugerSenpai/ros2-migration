// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/high_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unitree_legged_msgs/msg/detail/high_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unitree_legged_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unitree_legged_msgs::msg::BmsCmd &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unitree_legged_msgs::msg::BmsCmd &);
size_t get_serialized_size(
  const unitree_legged_msgs::msg::BmsCmd &,
  size_t current_alignment);
size_t
max_serialized_size_BmsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unitree_legged_msgs

namespace unitree_legged_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unitree_legged_msgs::msg::LED &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unitree_legged_msgs::msg::LED &);
size_t get_serialized_size(
  const unitree_legged_msgs::msg::LED &,
  size_t current_alignment);
size_t
max_serialized_size_LED(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unitree_legged_msgs


namespace unitree_legged_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
cdr_serialize(
  const unitree_legged_msgs::msg::HighCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: head
  {
    cdr << ros_message.head;
  }
  // Member: levelflag
  cdr << ros_message.levelflag;
  // Member: framereserve
  cdr << ros_message.framereserve;
  // Member: sn
  {
    cdr << ros_message.sn;
  }
  // Member: version
  {
    cdr << ros_message.version;
  }
  // Member: bandwidth
  cdr << ros_message.bandwidth;
  // Member: mode
  cdr << ros_message.mode;
  // Member: gaittype
  cdr << ros_message.gaittype;
  // Member: speedlevel
  cdr << ros_message.speedlevel;
  // Member: footraiseheight
  cdr << ros_message.footraiseheight;
  // Member: bodyheight
  cdr << ros_message.bodyheight;
  // Member: position
  {
    cdr << ros_message.position;
  }
  // Member: euler
  {
    cdr << ros_message.euler;
  }
  // Member: velocity
  {
    cdr << ros_message.velocity;
  }
  // Member: yawspeed
  cdr << ros_message.yawspeed;
  // Member: bms
  unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bms,
    cdr);
  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.led[i],
        cdr);
    }
  }
  // Member: wirelessremote
  {
    cdr << ros_message.wirelessremote;
  }
  // Member: reserve
  cdr << ros_message.reserve;
  // Member: crc
  cdr << ros_message.crc;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unitree_legged_msgs::msg::HighCmd & ros_message)
{
  // Member: head
  {
    cdr >> ros_message.head;
  }

  // Member: levelflag
  cdr >> ros_message.levelflag;

  // Member: framereserve
  cdr >> ros_message.framereserve;

  // Member: sn
  {
    cdr >> ros_message.sn;
  }

  // Member: version
  {
    cdr >> ros_message.version;
  }

  // Member: bandwidth
  cdr >> ros_message.bandwidth;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: gaittype
  cdr >> ros_message.gaittype;

  // Member: speedlevel
  cdr >> ros_message.speedlevel;

  // Member: footraiseheight
  cdr >> ros_message.footraiseheight;

  // Member: bodyheight
  cdr >> ros_message.bodyheight;

  // Member: position
  {
    cdr >> ros_message.position;
  }

  // Member: euler
  {
    cdr >> ros_message.euler;
  }

  // Member: velocity
  {
    cdr >> ros_message.velocity;
  }

  // Member: yawspeed
  cdr >> ros_message.yawspeed;

  // Member: bms
  unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bms);

  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.led[i]);
    }
  }

  // Member: wirelessremote
  {
    cdr >> ros_message.wirelessremote;
  }

  // Member: reserve
  cdr >> ros_message.reserve;

  // Member: crc
  cdr >> ros_message.crc;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
get_serialized_size(
  const unitree_legged_msgs::msg::HighCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: head
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.head[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: levelflag
  {
    size_t item_size = sizeof(ros_message.levelflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: framereserve
  {
    size_t item_size = sizeof(ros_message.framereserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sn
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.sn[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: version
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.version[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bandwidth
  {
    size_t item_size = sizeof(ros_message.bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gaittype
  {
    size_t item_size = sizeof(ros_message.gaittype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speedlevel
  {
    size_t item_size = sizeof(ros_message.speedlevel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footraiseheight
  {
    size_t item_size = sizeof(ros_message.footraiseheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bodyheight
  {
    size_t item_size = sizeof(ros_message.bodyheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: euler
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.euler[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yawspeed
  {
    size_t item_size = sizeof(ros_message.yawspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bms

  current_alignment +=
    unitree_legged_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bms, current_alignment);
  // Member: led
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.led[index], current_alignment);
    }
  }
  // Member: wirelessremote
  {
    size_t array_size = 40;
    size_t item_size = sizeof(ros_message.wirelessremote[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve
  {
    size_t item_size = sizeof(ros_message.reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crc
  {
    size_t item_size = sizeof(ros_message.crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
max_serialized_size_HighCmd(
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


  // Member: head
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: levelflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: framereserve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sn
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: version
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bandwidth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gaittype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speedlevel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: footraiseheight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bodyheight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: euler
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yawspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bms
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BmsCmd(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: led
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LED(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: wirelessremote
  {
    size_t array_size = 40;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crc
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
    using DataType = unitree_legged_msgs::msg::HighCmd;
    is_plain =
      (
      offsetof(DataType, crc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HighCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unitree_legged_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HighCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unitree_legged_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HighCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unitree_legged_msgs::msg::HighCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HighCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HighCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HighCmd__callbacks = {
  "unitree_legged_msgs::msg",
  "HighCmd",
  _HighCmd__cdr_serialize,
  _HighCmd__cdr_deserialize,
  _HighCmd__get_serialized_size,
  _HighCmd__max_serialized_size
};

static rosidl_message_type_support_t _HighCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HighCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unitree_legged_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unitree_legged_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_legged_msgs::msg::HighCmd>()
{
  return &unitree_legged_msgs::msg::typesupport_fastrtps_cpp::_HighCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unitree_legged_msgs, msg, HighCmd)() {
  return &unitree_legged_msgs::msg::typesupport_fastrtps_cpp::_HighCmd__handle;
}

#ifdef __cplusplus
}
#endif
