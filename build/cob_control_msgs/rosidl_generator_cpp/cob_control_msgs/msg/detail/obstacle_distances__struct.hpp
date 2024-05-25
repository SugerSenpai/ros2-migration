// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_control_msgs:msg/ObstacleDistances.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_HPP_
#define COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'distances'
#include "cob_control_msgs/msg/detail/obstacle_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cob_control_msgs__msg__ObstacleDistances __attribute__((deprecated))
#else
# define DEPRECATED__cob_control_msgs__msg__ObstacleDistances __declspec(deprecated)
#endif

namespace cob_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDistances_
{
  using Type = ObstacleDistances_<ContainerAllocator>;

  explicit ObstacleDistances_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ObstacleDistances_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _distances_type =
    std::vector<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>>;
  _distances_type distances;

  // setters for named parameter idiom
  Type & set__distances(
    const std::vector<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cob_control_msgs::msg::ObstacleDistance_<ContainerAllocator>>> & _arg)
  {
    this->distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_control_msgs__msg__ObstacleDistances
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_control_msgs__msg__ObstacleDistances
    std::shared_ptr<cob_control_msgs::msg::ObstacleDistances_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDistances_ & other) const
  {
    if (this->distances != other.distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDistances_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDistances_

// alias to use template instance with default allocator
using ObstacleDistances =
  cob_control_msgs::msg::ObstacleDistances_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__MSG__DETAIL__OBSTACLE_DISTANCES__STRUCT_HPP_
