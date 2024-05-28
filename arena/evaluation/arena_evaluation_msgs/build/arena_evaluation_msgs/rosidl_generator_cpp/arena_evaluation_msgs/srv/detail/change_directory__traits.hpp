// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arena_evaluation_msgs:srv/ChangeDirectory.idl
// generated code does not contain a copyright notice

#ifndef ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__TRAITS_HPP_
#define ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arena_evaluation_msgs/srv/detail/change_directory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arena_evaluation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeDirectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeDirectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeDirectory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arena_evaluation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arena_evaluation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arena_evaluation_msgs::srv::ChangeDirectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arena_evaluation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arena_evaluation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arena_evaluation_msgs::srv::ChangeDirectory_Request & msg)
{
  return arena_evaluation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arena_evaluation_msgs::srv::ChangeDirectory_Request>()
{
  return "arena_evaluation_msgs::srv::ChangeDirectory_Request";
}

template<>
inline const char * name<arena_evaluation_msgs::srv::ChangeDirectory_Request>()
{
  return "arena_evaluation_msgs/srv/ChangeDirectory_Request";
}

template<>
struct has_fixed_size<arena_evaluation_msgs::srv::ChangeDirectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arena_evaluation_msgs::srv::ChangeDirectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arena_evaluation_msgs::srv::ChangeDirectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arena_evaluation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeDirectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeDirectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeDirectory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arena_evaluation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arena_evaluation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arena_evaluation_msgs::srv::ChangeDirectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arena_evaluation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arena_evaluation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arena_evaluation_msgs::srv::ChangeDirectory_Response & msg)
{
  return arena_evaluation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arena_evaluation_msgs::srv::ChangeDirectory_Response>()
{
  return "arena_evaluation_msgs::srv::ChangeDirectory_Response";
}

template<>
inline const char * name<arena_evaluation_msgs::srv::ChangeDirectory_Response>()
{
  return "arena_evaluation_msgs/srv/ChangeDirectory_Response";
}

template<>
struct has_fixed_size<arena_evaluation_msgs::srv::ChangeDirectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arena_evaluation_msgs::srv::ChangeDirectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arena_evaluation_msgs::srv::ChangeDirectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arena_evaluation_msgs::srv::ChangeDirectory>()
{
  return "arena_evaluation_msgs::srv::ChangeDirectory";
}

template<>
inline const char * name<arena_evaluation_msgs::srv::ChangeDirectory>()
{
  return "arena_evaluation_msgs/srv/ChangeDirectory";
}

template<>
struct has_fixed_size<arena_evaluation_msgs::srv::ChangeDirectory>
  : std::integral_constant<
    bool,
    has_fixed_size<arena_evaluation_msgs::srv::ChangeDirectory_Request>::value &&
    has_fixed_size<arena_evaluation_msgs::srv::ChangeDirectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<arena_evaluation_msgs::srv::ChangeDirectory>
  : std::integral_constant<
    bool,
    has_bounded_size<arena_evaluation_msgs::srv::ChangeDirectory_Request>::value &&
    has_bounded_size<arena_evaluation_msgs::srv::ChangeDirectory_Response>::value
  >
{
};

template<>
struct is_service<arena_evaluation_msgs::srv::ChangeDirectory>
  : std::true_type
{
};

template<>
struct is_service_request<arena_evaluation_msgs::srv::ChangeDirectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arena_evaluation_msgs::srv::ChangeDirectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARENA_EVALUATION_MSGS__SRV__DETAIL__CHANGE_DIRECTORY__TRAITS_HPP_
