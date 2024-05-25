// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#ifndef COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cob_base_controller_utils/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "cob_base_controller_utils/msg/detail/wheel_commands__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace cob_base_controller_utils
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cob_base_controller_utils
cdr_serialize(
  const cob_base_controller_utils::msg::WheelCommands & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cob_base_controller_utils
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cob_base_controller_utils::msg::WheelCommands & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cob_base_controller_utils
get_serialized_size(
  const cob_base_controller_utils::msg::WheelCommands & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cob_base_controller_utils
max_serialized_size_WheelCommands(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cob_base_controller_utils

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cob_base_controller_utils
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cob_base_controller_utils, msg, WheelCommands)();

#ifdef __cplusplus
}
#endif

#endif  // COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
