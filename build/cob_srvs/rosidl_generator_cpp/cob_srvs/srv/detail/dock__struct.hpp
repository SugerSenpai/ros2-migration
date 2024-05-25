// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_srvs:srv/Dock.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__DOCK__STRUCT_HPP_
#define COB_SRVS__SRV__DETAIL__DOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cob_srvs__srv__Dock_Request __attribute__((deprecated))
#else
# define DEPRECATED__cob_srvs__srv__Dock_Request __declspec(deprecated)
#endif

namespace cob_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dock_Request_
{
  using Type = Dock_Request_<ContainerAllocator>;

  explicit Dock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stop_topic = "";
      this->stop_message_field = "";
      this->stop_compare_value = false;
      this->dist_threshold = 0.0f;
    }
  }

  explicit Dock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    stop_topic(_alloc),
    stop_message_field(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stop_topic = "";
      this->stop_message_field = "";
      this->stop_compare_value = false;
      this->dist_threshold = 0.0f;
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _stop_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_topic_type stop_topic;
  using _stop_message_field_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_message_field_type stop_message_field;
  using _stop_compare_value_type =
    bool;
  _stop_compare_value_type stop_compare_value;
  using _dist_threshold_type =
    float;
  _dist_threshold_type dist_threshold;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__stop_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop_topic = _arg;
    return *this;
  }
  Type & set__stop_message_field(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop_message_field = _arg;
    return *this;
  }
  Type & set__stop_compare_value(
    const bool & _arg)
  {
    this->stop_compare_value = _arg;
    return *this;
  }
  Type & set__dist_threshold(
    const float & _arg)
  {
    this->dist_threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_srvs::srv::Dock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_srvs::srv::Dock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::Dock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::Dock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_srvs__srv__Dock_Request
    std::shared_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_srvs__srv__Dock_Request
    std::shared_ptr<cob_srvs::srv::Dock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Request_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->stop_topic != other.stop_topic) {
      return false;
    }
    if (this->stop_message_field != other.stop_message_field) {
      return false;
    }
    if (this->stop_compare_value != other.stop_compare_value) {
      return false;
    }
    if (this->dist_threshold != other.dist_threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Request_

// alias to use template instance with default allocator
using Dock_Request =
  cob_srvs::srv::Dock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_srvs


#ifndef _WIN32
# define DEPRECATED__cob_srvs__srv__Dock_Response __attribute__((deprecated))
#else
# define DEPRECATED__cob_srvs__srv__Dock_Response __declspec(deprecated)
#endif

namespace cob_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dock_Response_
{
  using Type = Dock_Response_<ContainerAllocator>;

  explicit Dock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Dock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_srvs::srv::Dock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_srvs::srv::Dock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::Dock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::Dock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_srvs__srv__Dock_Response
    std::shared_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_srvs__srv__Dock_Response
    std::shared_ptr<cob_srvs::srv::Dock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dock_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dock_Response_

// alias to use template instance with default allocator
using Dock_Response =
  cob_srvs::srv::Dock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_srvs

namespace cob_srvs
{

namespace srv
{

struct Dock
{
  using Request = cob_srvs::srv::Dock_Request;
  using Response = cob_srvs::srv::Dock_Response;
};

}  // namespace srv

}  // namespace cob_srvs

#endif  // COB_SRVS__SRV__DETAIL__DOCK__STRUCT_HPP_
