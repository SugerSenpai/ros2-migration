// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_HPP_
#define COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Request __attribute__((deprecated))
#else
# define DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Request __declspec(deprecated)
#endif

namespace cob_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObstacleDistance_Request_
{
  using Type = GetObstacleDistance_Request_<ContainerAllocator>;

  explicit GetObstacleDistance_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetObstacleDistance_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _links_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _links_type links;
  using _objects_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__links(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Request
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Request
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObstacleDistance_Request_ & other) const
  {
    if (this->links != other.links) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObstacleDistance_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObstacleDistance_Request_

// alias to use template instance with default allocator
using GetObstacleDistance_Request =
  cob_control_msgs::srv::GetObstacleDistance_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_control_msgs


#ifndef _WIN32
# define DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Response __attribute__((deprecated))
#else
# define DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Response __declspec(deprecated)
#endif

namespace cob_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObstacleDistance_Response_
{
  using Type = GetObstacleDistance_Response_<ContainerAllocator>;

  explicit GetObstacleDistance_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetObstacleDistance_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _link_to_object_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _link_to_object_type link_to_object;
  using _distances_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _distances_type distances;

  // setters for named parameter idiom
  Type & set__link_to_object(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->link_to_object = _arg;
    return *this;
  }
  Type & set__distances(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Response
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_control_msgs__srv__GetObstacleDistance_Response
    std::shared_ptr<cob_control_msgs::srv::GetObstacleDistance_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObstacleDistance_Response_ & other) const
  {
    if (this->link_to_object != other.link_to_object) {
      return false;
    }
    if (this->distances != other.distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObstacleDistance_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObstacleDistance_Response_

// alias to use template instance with default allocator
using GetObstacleDistance_Response =
  cob_control_msgs::srv::GetObstacleDistance_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_control_msgs

namespace cob_control_msgs
{

namespace srv
{

struct GetObstacleDistance
{
  using Request = cob_control_msgs::srv::GetObstacleDistance_Request;
  using Response = cob_control_msgs::srv::GetObstacleDistance_Response;
};

}  // namespace srv

}  // namespace cob_control_msgs

#endif  // COB_CONTROL_MSGS__SRV__DETAIL__GET_OBSTACLE_DISTANCE__STRUCT_HPP_
