// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_srvs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__DOCK__TRAITS_HPP_
#define COB_SRVS__SRV__DETAIL__DOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_srvs/srv/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace cob_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dock_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_topic
  {
    out << "stop_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_topic, out);
    out << ", ";
  }

  // member: stop_message_field
  {
    out << "stop_message_field: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_message_field, out);
    out << ", ";
  }

  // member: stop_compare_value
  {
    out << "stop_compare_value: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_compare_value, out);
    out << ", ";
  }

  // member: dist_threshold
  {
    out << "dist_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stop_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_topic, out);
    out << "\n";
  }

  // member: stop_message_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_message_field: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_message_field, out);
    out << "\n";
  }

  // member: stop_compare_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_compare_value: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_compare_value, out);
    out << "\n";
  }

  // member: dist_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_Request & msg, bool use_flow_style = false)
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
  const cob_srvs::srv::Dock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_srvs::srv::Dock_Request & msg)
{
  return cob_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_srvs::srv::Dock_Request>()
{
  return "cob_srvs::srv::Dock_Request";
}

template<>
inline const char * name<cob_srvs::srv::Dock_Request>()
{
  return "cob_srvs/srv/Dock_Request";
}

template<>
struct has_fixed_size<cob_srvs::srv::Dock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_srvs::srv::Dock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_srvs::srv::Dock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cob_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dock_Response & msg,
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
  const Dock_Response & msg,
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

inline std::string to_yaml(const Dock_Response & msg, bool use_flow_style = false)
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
  const cob_srvs::srv::Dock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_srvs::srv::Dock_Response & msg)
{
  return cob_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_srvs::srv::Dock_Response>()
{
  return "cob_srvs::srv::Dock_Response";
}

template<>
inline const char * name<cob_srvs::srv::Dock_Response>()
{
  return "cob_srvs/srv/Dock_Response";
}

template<>
struct has_fixed_size<cob_srvs::srv::Dock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_srvs::srv::Dock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_srvs::srv::Dock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cob_srvs::srv::Dock>()
{
  return "cob_srvs::srv::Dock";
}

template<>
inline const char * name<cob_srvs::srv::Dock>()
{
  return "cob_srvs/srv/Dock";
}

template<>
struct has_fixed_size<cob_srvs::srv::Dock>
  : std::integral_constant<
    bool,
    has_fixed_size<cob_srvs::srv::Dock_Request>::value &&
    has_fixed_size<cob_srvs::srv::Dock_Response>::value
  >
{
};

template<>
struct has_bounded_size<cob_srvs::srv::Dock>
  : std::integral_constant<
    bool,
    has_bounded_size<cob_srvs::srv::Dock_Request>::value &&
    has_bounded_size<cob_srvs::srv::Dock_Response>::value
  >
{
};

template<>
struct is_service<cob_srvs::srv::Dock>
  : std::true_type
{
};

template<>
struct is_service_request<cob_srvs::srv::Dock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cob_srvs::srv::Dock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COB_SRVS__SRV__DETAIL__DOCK__TRAITS_HPP_
