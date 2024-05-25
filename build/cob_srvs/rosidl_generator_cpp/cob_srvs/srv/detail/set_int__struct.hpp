// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cob_srvs:srv/SetInt.idl
// generated code does not contain a copyright notice

#ifndef COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_HPP_
#define COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cob_srvs__srv__SetInt_Request __attribute__((deprecated))
#else
# define DEPRECATED__cob_srvs__srv__SetInt_Request __declspec(deprecated)
#endif

namespace cob_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInt_Request_
{
  using Type = SetInt_Request_<ContainerAllocator>;

  explicit SetInt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  explicit SetInt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  // field types and members
  using _data_type =
    int32_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const int32_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cob_srvs::srv::SetInt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_srvs::srv::SetInt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::SetInt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::SetInt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_srvs__srv__SetInt_Request
    std::shared_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_srvs__srv__SetInt_Request
    std::shared_ptr<cob_srvs::srv::SetInt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInt_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInt_Request_

// alias to use template instance with default allocator
using SetInt_Request =
  cob_srvs::srv::SetInt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_srvs


#ifndef _WIN32
# define DEPRECATED__cob_srvs__srv__SetInt_Response __attribute__((deprecated))
#else
# define DEPRECATED__cob_srvs__srv__SetInt_Response __declspec(deprecated)
#endif

namespace cob_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetInt_Response_
{
  using Type = SetInt_Response_<ContainerAllocator>;

  explicit SetInt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetInt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cob_srvs::srv::SetInt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cob_srvs::srv::SetInt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::SetInt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cob_srvs::srv::SetInt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cob_srvs__srv__SetInt_Response
    std::shared_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cob_srvs__srv__SetInt_Response
    std::shared_ptr<cob_srvs::srv::SetInt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetInt_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetInt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetInt_Response_

// alias to use template instance with default allocator
using SetInt_Response =
  cob_srvs::srv::SetInt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cob_srvs

namespace cob_srvs
{

namespace srv
{

struct SetInt
{
  using Request = cob_srvs::srv::SetInt_Request;
  using Response = cob_srvs::srv::SetInt_Response;
};

}  // namespace srv

}  // namespace cob_srvs

#endif  // COB_SRVS__SRV__DETAIL__SET_INT__STRUCT_HPP_
