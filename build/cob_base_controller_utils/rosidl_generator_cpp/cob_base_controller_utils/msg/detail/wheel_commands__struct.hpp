// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_base_controller_utils:msg/WheelCommands.idl
// generated code does not contain a copyright notice

#ifndef COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_HPP_
#define COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__cob_base_controller_utils__msg__WheelCommands __attribute__((deprecated))
#else
# define DEPRECATED__cob_base_controller_utils__msg__WheelCommands __declspec(deprecated)
#endif

namespace cob_base_controller_utils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelCommands_
{
  using Type = WheelCommands_<ContainerAllocator>;

  explicit WheelCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit WheelCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drive_target_velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _drive_target_velocity_type drive_target_velocity;
  using _steer_target_velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_target_velocity_type steer_target_velocity;
  using _steer_target_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_target_position_type steer_target_position;
  using _steer_target_error_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_target_error_type steer_target_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drive_target_velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->drive_target_velocity = _arg;
    return *this;
  }
  Type & set__steer_target_velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_target_velocity = _arg;
    return *this;
  }
  Type & set__steer_target_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_target_position = _arg;
    return *this;
  }
  Type & set__steer_target_error(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_target_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_base_controller_utils__msg__WheelCommands
    std::shared_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_base_controller_utils__msg__WheelCommands
    std::shared_ptr<cob_base_controller_utils::msg::WheelCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drive_target_velocity != other.drive_target_velocity) {
      return false;
    }
    if (this->steer_target_velocity != other.steer_target_velocity) {
      return false;
    }
    if (this->steer_target_position != other.steer_target_position) {
      return false;
    }
    if (this->steer_target_error != other.steer_target_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelCommands_

// alias to use template instance with default allocator
using WheelCommands =
  cob_base_controller_utils::msg::WheelCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cob_base_controller_utils

#endif  // COB_BASE_CONTROLLER_UTILS__MSG__DETAIL__WHEEL_COMMANDS__STRUCT_HPP_
