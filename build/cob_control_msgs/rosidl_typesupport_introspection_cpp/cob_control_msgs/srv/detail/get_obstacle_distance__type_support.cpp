// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cob_control_msgs:srv/GetObstacleDistance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cob_control_msgs/srv/detail/get_obstacle_distance__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cob_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetObstacleDistance_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cob_control_msgs::srv::GetObstacleDistance_Request(_init);
}

void GetObstacleDistance_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cob_control_msgs::srv::GetObstacleDistance_Request *>(message_memory);
  typed_message->~GetObstacleDistance_Request();
}

size_t size_function__GetObstacleDistance_Request__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObstacleDistance_Request__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObstacleDistance_Request__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObstacleDistance_Request__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetObstacleDistance_Request__links(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetObstacleDistance_Request__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetObstacleDistance_Request__links(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetObstacleDistance_Request__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetObstacleDistance_Request__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObstacleDistance_Request__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObstacleDistance_Request__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObstacleDistance_Request__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetObstacleDistance_Request__objects(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetObstacleDistance_Request__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetObstacleDistance_Request__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetObstacleDistance_Request__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetObstacleDistance_Request_message_member_array[2] = {
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_control_msgs::srv::GetObstacleDistance_Request, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObstacleDistance_Request__links,  // size() function pointer
    get_const_function__GetObstacleDistance_Request__links,  // get_const(index) function pointer
    get_function__GetObstacleDistance_Request__links,  // get(index) function pointer
    fetch_function__GetObstacleDistance_Request__links,  // fetch(index, &value) function pointer
    assign_function__GetObstacleDistance_Request__links,  // assign(index, value) function pointer
    resize_function__GetObstacleDistance_Request__links  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_control_msgs::srv::GetObstacleDistance_Request, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObstacleDistance_Request__objects,  // size() function pointer
    get_const_function__GetObstacleDistance_Request__objects,  // get_const(index) function pointer
    get_function__GetObstacleDistance_Request__objects,  // get(index) function pointer
    fetch_function__GetObstacleDistance_Request__objects,  // fetch(index, &value) function pointer
    assign_function__GetObstacleDistance_Request__objects,  // assign(index, value) function pointer
    resize_function__GetObstacleDistance_Request__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetObstacleDistance_Request_message_members = {
  "cob_control_msgs::srv",  // message namespace
  "GetObstacleDistance_Request",  // message name
  2,  // number of fields
  sizeof(cob_control_msgs::srv::GetObstacleDistance_Request),
  GetObstacleDistance_Request_message_member_array,  // message members
  GetObstacleDistance_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetObstacleDistance_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetObstacleDistance_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObstacleDistance_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cob_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cob_control_msgs::srv::GetObstacleDistance_Request>()
{
  return &::cob_control_msgs::srv::rosidl_typesupport_introspection_cpp::GetObstacleDistance_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cob_control_msgs, srv, GetObstacleDistance_Request)() {
  return &::cob_control_msgs::srv::rosidl_typesupport_introspection_cpp::GetObstacleDistance_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "cob_control_msgs/srv/detail/get_obstacle_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cob_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetObstacleDistance_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cob_control_msgs::srv::GetObstacleDistance_Response(_init);
}

void GetObstacleDistance_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cob_control_msgs::srv::GetObstacleDistance_Response *>(message_memory);
  typed_message->~GetObstacleDistance_Response();
}

size_t size_function__GetObstacleDistance_Response__link_to_object(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObstacleDistance_Response__link_to_object(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObstacleDistance_Response__link_to_object(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObstacleDistance_Response__link_to_object(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetObstacleDistance_Response__link_to_object(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetObstacleDistance_Response__link_to_object(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetObstacleDistance_Response__link_to_object(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetObstacleDistance_Response__link_to_object(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetObstacleDistance_Response__distances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetObstacleDistance_Response__distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetObstacleDistance_Response__distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetObstacleDistance_Response__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetObstacleDistance_Response__distances(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetObstacleDistance_Response__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetObstacleDistance_Response__distances(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetObstacleDistance_Response__distances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetObstacleDistance_Response_message_member_array[2] = {
  {
    "link_to_object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_control_msgs::srv::GetObstacleDistance_Response, link_to_object),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObstacleDistance_Response__link_to_object,  // size() function pointer
    get_const_function__GetObstacleDistance_Response__link_to_object,  // get_const(index) function pointer
    get_function__GetObstacleDistance_Response__link_to_object,  // get(index) function pointer
    fetch_function__GetObstacleDistance_Response__link_to_object,  // fetch(index, &value) function pointer
    assign_function__GetObstacleDistance_Response__link_to_object,  // assign(index, value) function pointer
    resize_function__GetObstacleDistance_Response__link_to_object  // resize(index) function pointer
  },
  {
    "distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cob_control_msgs::srv::GetObstacleDistance_Response, distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetObstacleDistance_Response__distances,  // size() function pointer
    get_const_function__GetObstacleDistance_Response__distances,  // get_const(index) function pointer
    get_function__GetObstacleDistance_Response__distances,  // get(index) function pointer
    fetch_function__GetObstacleDistance_Response__distances,  // fetch(index, &value) function pointer
    assign_function__GetObstacleDistance_Response__distances,  // assign(index, value) function pointer
    resize_function__GetObstacleDistance_Response__distances  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetObstacleDistance_Response_message_members = {
  "cob_control_msgs::srv",  // message namespace
  "GetObstacleDistance_Response",  // message name
  2,  // number of fields
  sizeof(cob_control_msgs::srv::GetObstacleDistance_Response),
  GetObstacleDistance_Response_message_member_array,  // message members
  GetObstacleDistance_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetObstacleDistance_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetObstacleDistance_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObstacleDistance_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cob_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cob_control_msgs::srv::GetObstacleDistance_Response>()
{
  return &::cob_control_msgs::srv::rosidl_typesupport_introspection_cpp::GetObstacleDistance_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cob_control_msgs, srv, GetObstacleDistance_Response)() {
  return &::cob_control_msgs::srv::rosidl_typesupport_introspection_cpp::GetObstacleDistance_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "cob_control_msgs/srv/detail/get_obstacle_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace cob_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetObstacleDistance_service_members = {
  "cob_control_msgs::srv",  // service namespace
  "GetObstacleDistance",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<cob_control_msgs::srv::GetObstacleDistance>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetObstacleDistance_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetObstacleDistance_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cob_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cob_control_msgs::srv::GetObstacleDistance>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::cob_control_msgs::srv::rosidl_typesupport_introspection_cpp::GetObstacleDistance_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cob_control_msgs::srv::GetObstacleDistance_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cob_control_msgs::srv::GetObstacleDistance_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cob_control_msgs, srv, GetObstacleDistance)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<cob_control_msgs::srv::GetObstacleDistance>();
}

#ifdef __cplusplus
}
#endif
