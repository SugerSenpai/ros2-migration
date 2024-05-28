// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice
#include "arena_evaluation_msgs/srv/detail/change_directory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arena_evaluation_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arena_evaluation_msgs/srv/detail/change_directory__struct.h"
#include "arena_evaluation_msgs/srv/detail/change_directory__functions.h"
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

#include "rosidl_runtime_c/string.h"  // data
#include "rosidl_runtime_c/string_functions.h"  // data

// forward declare type support functions


using _ChangeDirectory_Request__ros_msg_type = arena_evaluation_msgs__srv__ChangeDirectory_Request;

static bool _ChangeDirectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeDirectory_Request__ros_msg_type * ros_message = static_cast<const _ChangeDirectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const rosidl_runtime_c__String * str = &ros_message->data;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ChangeDirectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeDirectory_Request__ros_msg_type * ros_message = static_cast<_ChangeDirectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data.data) {
      rosidl_runtime_c__String__init(&ros_message->data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arena_evaluation_msgs
size_t get_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeDirectory_Request__ros_msg_type * ros_message = static_cast<const _ChangeDirectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeDirectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arena_evaluation_msgs
size_t max_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Request(
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

  // member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arena_evaluation_msgs__srv__ChangeDirectory_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeDirectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeDirectory_Request = {
  "arena_evaluation_msgs::srv",
  "ChangeDirectory_Request",
  _ChangeDirectory_Request__cdr_serialize,
  _ChangeDirectory_Request__cdr_deserialize,
  _ChangeDirectory_Request__get_serialized_size,
  _ChangeDirectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeDirectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeDirectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arena_evaluation_msgs, srv, ChangeDirectory_Request)() {
  return &_ChangeDirectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arena_evaluation_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arena_evaluation_msgs/srv/detail/change_directory__struct.h"
// already included above
// #include "arena_evaluation_msgs/srv/detail/change_directory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _ChangeDirectory_Response__ros_msg_type = arena_evaluation_msgs__srv__ChangeDirectory_Response;

static bool _ChangeDirectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeDirectory_Response__ros_msg_type * ros_message = static_cast<const _ChangeDirectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _ChangeDirectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeDirectory_Response__ros_msg_type * ros_message = static_cast<_ChangeDirectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arena_evaluation_msgs
size_t get_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeDirectory_Response__ros_msg_type * ros_message = static_cast<const _ChangeDirectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeDirectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arena_evaluation_msgs
size_t max_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Response(
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

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arena_evaluation_msgs__srv__ChangeDirectory_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeDirectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arena_evaluation_msgs__srv__ChangeDirectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeDirectory_Response = {
  "arena_evaluation_msgs::srv",
  "ChangeDirectory_Response",
  _ChangeDirectory_Response__cdr_serialize,
  _ChangeDirectory_Response__cdr_deserialize,
  _ChangeDirectory_Response__get_serialized_size,
  _ChangeDirectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeDirectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeDirectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arena_evaluation_msgs, srv, ChangeDirectory_Response)() {
  return &_ChangeDirectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "arena_evaluation_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arena_evaluation_msgs/srv/change_directory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChangeDirectory__callbacks = {
  "arena_evaluation_msgs::srv",
  "ChangeDirectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arena_evaluation_msgs, srv, ChangeDirectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arena_evaluation_msgs, srv, ChangeDirectory_Response)(),
};

static rosidl_service_type_support_t ChangeDirectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ChangeDirectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arena_evaluation_msgs, srv, ChangeDirectory)() {
  return &ChangeDirectory__handle;
}

#if defined(__cplusplus)
}
#endif
