// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "cob_control_msgs/msg/detail/header__struct.hpp"
// Member 'frame_vector'
// Member 'nearest_point_frame_vector'
// Member 'nearest_point_obstacle_vector'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cob_control_msgs__msg__ObstacleDistance __attribute__((deprecated))
#else
# define DEPRECATED__cob_control_msgs__msg__ObstacleDistance __declspec(deprecated)
#endif

namespace cob_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDistance_
{
  using Type = ObstacleDistance_<ContainerAllocator>;

  explicit ObstacleDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    frame_vector(_init),
    nearest_point_frame_vector(_init),
    nearest_point_obstacle_vector(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_of_interest = "";
      this->obstacle_id = "";
      this->distance = 0.0;
    }
  }

  explicit ObstacleDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    link_of_interest(_alloc),
    obstacle_id(_alloc),
    frame_vector(_alloc, _init),
    nearest_point_frame_vector(_alloc, _init),
    nearest_point_obstacle_vector(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_of_interest = "";
      this->obstacle_id = "";
      this->distance = 0.0;
    }
  }

  // field types and members
  using _header_type =
    cob_control_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _link_of_interest_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_of_interest_type link_of_interest;
  using _obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obstacle_id_type obstacle_id;
  using _distance_type =
    double;
  _distance_type distance;
  using _frame_vector_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _frame_vector_type frame_vector;
  using _nearest_point_frame_vector_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _nearest_point_frame_vector_type nearest_point_frame_vector;
  using _nearest_point_obstacle_vector_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _nearest_point_obstacle_vector_type nearest_point_obstacle_vector;

  // setters for named parameter idiom
  Type & set__header(
    const cob_control_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__link_of_interest(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_of_interest = _arg;
    return *this;
  }
  Type & set__obstacle_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obstacle_id = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__frame_vector(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->frame_vector = _arg;
    return *this;
  }
  Type & set__nearest_point_frame_vector(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->nearest_point_frame_vector = _arg;
    return *this;
  }
  Type & set__nearest_point_obstacle_vector(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->nearest_point_obstacle_vector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_control_msgs__msg__ObstacleDistance
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_control_msgs__msg__ObstacleDistance
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDistance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->link_of_interest != other.link_of_interest) {
      return false;
    }
    if (this->obstacle_id != other.obstacle_id) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->frame_vector != other.frame_vector) {
      return false;
    }
    if (this->nearest_point_frame_vector != other.nearest_point_frame_vector) {
      return false;
    }
    if (this->nearest_point_obstacle_vector != other.nearest_point_obstacle_vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDistance_

// alias to use template instance with default allocator
using ObstacleDistance =
  cob_control_msgs::msg::ObstacleDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
