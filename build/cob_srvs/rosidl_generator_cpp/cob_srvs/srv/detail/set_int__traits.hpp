// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_srvs:srv/SetInt.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__SET_INT__TRAITS_HPP_
#define COB_SRVS__SRV__DETAIL__SET_INT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_srvs/srv/detail/set_int__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cob_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInt_Request & msg,
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
  const SetInt_Request & msg,
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

inline std::string to_yaml(const SetInt_Request & msg, bool use_flow_style = false)
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

}  // namespace cob_srvs

namespace rosidl_generator_traits
{

[[deprecated("use cob_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_srvs::srv::SetInt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_srvs::srv::SetInt_Request & msg)
{
  return cob_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_srvs::srv::SetInt_Request>()
{
  return "cob_srvs::srv::SetInt_Request";
}

template<>
inline const char * name<cob_srvs::srv::SetInt_Request>()
{
  return "cob_srvs/srv/SetInt_Request";
}

template<>
struct has_fixed_size<cob_srvs::srv::SetInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cob_srvs::srv::SetInt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cob_srvs::srv::SetInt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cob_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetInt_Response & msg, bool use_flow_style = false)
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

}  // namespace cob_srvs

namespace rosidl_generator_traits
{

[[deprecated("use cob_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_srvs::srv::SetInt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_srvs::srv::SetInt_Response & msg)
{
  return cob_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_srvs::srv::SetInt_Response>()
{
  return "cob_srvs::srv::SetInt_Response";
}

template<>
inline const char * name<cob_srvs::srv::SetInt_Response>()
{
  return "cob_srvs/srv/SetInt_Response";
}

template<>
struct has_fixed_size<cob_srvs::srv::SetInt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_srvs::srv::SetInt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_srvs::srv::SetInt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cob_srvs::srv::SetInt>()
{
  return "cob_srvs::srv::SetInt";
}

template<>
inline const char * name<cob_srvs::srv::SetInt>()
{
  return "cob_srvs/srv/SetInt";
}

template<>
struct has_fixed_size<cob_srvs::srv::SetInt>
  : std::integral_constant<
    bool,
    has_fixed_size<cob_srvs::srv::SetInt_Request>::value &&
    has_fixed_size<cob_srvs::srv::SetInt_Response>::value
  >
{
};

template<>
struct has_bounded_size<cob_srvs::srv::SetInt>
  : std::integral_constant<
    bool,
    has_bounded_size<cob_srvs::srv::SetInt_Request>::value &&
    has_bounded_size<cob_srvs::srv::SetInt_Response>::value
  >
{
};

template<>
struct is_service<cob_srvs::srv::SetInt>
  : std::true_type
{
};

template<>
struct is_service_request<cob_srvs::srv::SetInt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cob_srvs::srv::SetInt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COB_SRVS__SRV__DETAIL__SET_INT__TRAITS_HPP_
