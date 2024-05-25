// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__TRAITS_HPP_
#define COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cob_control_msgs/srv/detail/get_obstacle_distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cob_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObstacleDistance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObstacleDistance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObstacleDistance_Request & msg, bool use_flow_style = false)
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

}  // namespace cob_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cob_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_control_msgs::srv::GetObstacleDistance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_control_msgs::srv::GetObstacleDistance_Request & msg)
{
  return cob_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_control_msgs::srv::GetObstacleDistance_Request>()
{
  return "cob_control_msgs::srv::GetObstacleDistance_Request";
}

template<>
inline const char * name<cob_control_msgs::srv::GetObstacleDistance_Request>()
{
  return "cob_control_msgs/srv/GetObstacleDistance_Request";
}

template<>
struct has_fixed_size<cob_control_msgs::srv::GetObstacleDistance_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_control_msgs::srv::GetObstacleDistance_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_control_msgs::srv::GetObstacleDistance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cob_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObstacleDistance_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_to_object
  {
    if (msg.link_to_object.size() == 0) {
      out << "link_to_object: []";
    } else {
      out << "link_to_object: [";
      size_t pending_items = msg.link_to_object.size();
      for (auto item : msg.link_to_object) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distances
  {
    if (msg.distances.size() == 0) {
      out << "distances: []";
    } else {
      out << "distances: [";
      size_t pending_items = msg.distances.size();
      for (auto item : msg.distances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObstacleDistance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_to_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_to_object.size() == 0) {
      out << "link_to_object: []\n";
    } else {
      out << "link_to_object:\n";
      for (auto item : msg.link_to_object) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distances.size() == 0) {
      out << "distances: []\n";
    } else {
      out << "distances:\n";
      for (auto item : msg.distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObstacleDistance_Response & msg, bool use_flow_style = false)
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

}  // namespace cob_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cob_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cob_control_msgs::srv::GetObstacleDistance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cob_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cob_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cob_control_msgs::srv::GetObstacleDistance_Response & msg)
{
  return cob_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cob_control_msgs::srv::GetObstacleDistance_Response>()
{
  return "cob_control_msgs::srv::GetObstacleDistance_Response";
}

template<>
inline const char * name<cob_control_msgs::srv::GetObstacleDistance_Response>()
{
  return "cob_control_msgs/srv/GetObstacleDistance_Response";
}

template<>
struct has_fixed_size<cob_control_msgs::srv::GetObstacleDistance_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cob_control_msgs::srv::GetObstacleDistance_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cob_control_msgs::srv::GetObstacleDistance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cob_control_msgs::srv::GetObstacleDistance>()
{
  return "cob_control_msgs::srv::GetObstacleDistance";
}

template<>
inline const char * name<cob_control_msgs::srv::GetObstacleDistance>()
{
  return "cob_control_msgs/srv/GetObstacleDistance";
}

template<>
struct has_fixed_size<cob_control_msgs::srv::GetObstacleDistance>
  : std::integral_constant<
    bool,
    has_fixed_size<cob_control_msgs::srv::GetObstacleDistance_Request>::value &&
    has_fixed_size<cob_control_msgs::srv::GetObstacleDistance_Response>::value
  >
{
};

template<>
struct has_bounded_size<cob_control_msgs::srv::GetObstacleDistance>
  : std::integral_constant<
    bool,
    has_bounded_size<cob_control_msgs::srv::GetObstacleDistance_Request>::value &&
    has_bounded_size<cob_control_msgs::srv::GetObstacleDistance_Response>::value
  >
{
};

template<>
struct is_service<cob_control_msgs::srv::GetObstacleDistance>
  : std::true_type
{
};

template<>
struct is_service_request<cob_control_msgs::srv::GetObstacleDistance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cob_control_msgs::srv::GetObstacleDistance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__TRAITS_HPP_
