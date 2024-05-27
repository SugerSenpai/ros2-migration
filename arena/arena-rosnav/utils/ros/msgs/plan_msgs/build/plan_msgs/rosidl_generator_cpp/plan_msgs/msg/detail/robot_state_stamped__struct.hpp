// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plan_msgs:msg/RobotStateStamped.idl
// generated code does not contain a copyright notice

#ifndef PLAN_MSGS__MSG__DETAIL__ROBOT_STATE_STAMPED__STRUCT_HPP_
#define PLAN_MSGS__MSG__DETAIL__ROBOT_STATE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
#include "plan_msgs/msg/detail/robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plan_msgs__msg__RobotStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__plan_msgs__msg__RobotStateStamped __declspec(deprecated)
#endif

namespace plan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStateStamped_
{
  using Type = RobotStateStamped_<ContainerAllocator>;

  explicit RobotStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init)
  {
    (void)_init;
  }

  explicit RobotStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    plan_msgs::msg::RobotState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const plan_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plan_msgs::msg::RobotStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const plan_msgs::msg::RobotStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plan_msgs::msg::RobotStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plan_msgs::msg::RobotStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plan_msgs__msg__RobotStateStamped
    std::shared_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plan_msgs__msg__RobotStateStamped
    std::shared_ptr<plan_msgs::msg::RobotStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStateStamped_

// alias to use template instance with default allocator
using RobotStateStamped =
  plan_msgs::msg::RobotStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plan_msgs

#endif  // PLAN_MSGS__MSG__DETAIL__ROBOT_STATE_STAMPED__STRUCT_HPP_
