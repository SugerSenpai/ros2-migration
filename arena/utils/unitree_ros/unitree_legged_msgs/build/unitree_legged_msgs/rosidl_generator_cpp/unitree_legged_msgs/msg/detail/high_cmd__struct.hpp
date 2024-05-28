// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bms'
#include "unitree_legged_msgs/msg/detail/bms_cmd__struct.hpp"
// Member 'led'
#include "unitree_legged_msgs/msg/detail/led__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_legged_msgs__msg__HighCmd __attribute__((deprecated))
#else
# define DEPRECATED__unitree_legged_msgs__msg__HighCmd __declspec(deprecated)
#endif

namespace unitree_legged_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HighCmd_
{
  using Type = HighCmd_<ContainerAllocator>;

  explicit HighCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bms(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->head.begin(), this->head.end(), 0);
      this->levelflag = 0;
      this->framereserve = 0;
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->sn.begin(), this->sn.end(), 0ul);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->version.begin(), this->version.end(), 0ul);
      this->bandwidth = 0;
      this->mode = 0;
      this->gaittype = 0;
      this->speedlevel = 0;
      this->footraiseheight = 0.0f;
      this->bodyheight = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->euler.begin(), this->euler.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      this->yawspeed = 0.0f;
      this->led.fill(unitree_legged_msgs::msg::LED_<ContainerAllocator>{_init});
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
    }
  }

  explicit HighCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : head(_alloc),
    sn(_alloc),
    version(_alloc),
    position(_alloc),
    euler(_alloc),
    velocity(_alloc),
    bms(_alloc, _init),
    led(_alloc),
    wirelessremote(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->head.begin(), this->head.end(), 0);
      this->levelflag = 0;
      this->framereserve = 0;
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->sn.begin(), this->sn.end(), 0ul);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->version.begin(), this->version.end(), 0ul);
      this->bandwidth = 0;
      this->mode = 0;
      this->gaittype = 0;
      this->speedlevel = 0;
      this->footraiseheight = 0.0f;
      this->bodyheight = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->euler.begin(), this->euler.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      this->yawspeed = 0.0f;
      this->led.fill(unitree_legged_msgs::msg::LED_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<uint8_t, 40>::iterator, uint8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0ul;
      this->crc = 0ul;
    }
  }

  // field types and members
  using _head_type =
    std::array<uint8_t, 2>;
  _head_type head;
  using _levelflag_type =
    uint8_t;
  _levelflag_type levelflag;
  using _framereserve_type =
    uint8_t;
  _framereserve_type framereserve;
  using _sn_type =
    std::array<uint32_t, 2>;
  _sn_type sn;
  using _version_type =
    std::array<uint32_t, 2>;
  _version_type version;
  using _bandwidth_type =
    uint16_t;
  _bandwidth_type bandwidth;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _gaittype_type =
    uint8_t;
  _gaittype_type gaittype;
  using _speedlevel_type =
    uint8_t;
  _speedlevel_type speedlevel;
  using _footraiseheight_type =
    float;
  _footraiseheight_type footraiseheight;
  using _bodyheight_type =
    float;
  _bodyheight_type bodyheight;
  using _position_type =
    std::array<float, 2>;
  _position_type position;
  using _euler_type =
    std::array<float, 3>;
  _euler_type euler;
  using _velocity_type =
    std::array<float, 2>;
  _velocity_type velocity;
  using _yawspeed_type =
    float;
  _yawspeed_type yawspeed;
  using _bms_type =
    unitree_legged_msgs::msg::BmsCmd_<ContainerAllocator>;
  _bms_type bms;
  using _led_type =
    std::array<unitree_legged_msgs::msg::LED_<ContainerAllocator>, 4>;
  _led_type led;
  using _wirelessremote_type =
    std::array<uint8_t, 40>;
  _wirelessremote_type wirelessremote;
  using _reserve_type =
    uint32_t;
  _reserve_type reserve;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__head(
    const std::array<uint8_t, 2> & _arg)
  {
    this->head = _arg;
    return *this;
  }
  Type & set__levelflag(
    const uint8_t & _arg)
  {
    this->levelflag = _arg;
    return *this;
  }
  Type & set__framereserve(
    const uint8_t & _arg)
  {
    this->framereserve = _arg;
    return *this;
  }
  Type & set__sn(
    const std::array<uint32_t, 2> & _arg)
  {
    this->sn = _arg;
    return *this;
  }
  Type & set__version(
    const std::array<uint32_t, 2> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__bandwidth(
    const uint16_t & _arg)
  {
    this->bandwidth = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__gaittype(
    const uint8_t & _arg)
  {
    this->gaittype = _arg;
    return *this;
  }
  Type & set__speedlevel(
    const uint8_t & _arg)
  {
    this->speedlevel = _arg;
    return *this;
  }
  Type & set__footraiseheight(
    const float & _arg)
  {
    this->footraiseheight = _arg;
    return *this;
  }
  Type & set__bodyheight(
    const float & _arg)
  {
    this->bodyheight = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 2> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__euler(
    const std::array<float, 3> & _arg)
  {
    this->euler = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 2> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__yawspeed(
    const float & _arg)
  {
    this->yawspeed = _arg;
    return *this;
  }
  Type & set__bms(
    const unitree_legged_msgs::msg::BmsCmd_<ContainerAllocator> & _arg)
  {
    this->bms = _arg;
    return *this;
  }
  Type & set__led(
    const std::array<unitree_legged_msgs::msg::LED_<ContainerAllocator>, 4> & _arg)
  {
    this->led = _arg;
    return *this;
  }
  Type & set__wirelessremote(
    const std::array<uint8_t, 40> & _arg)
  {
    this->wirelessremote = _arg;
    return *this;
  }
  Type & set__reserve(
    const uint32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_legged_msgs__msg__HighCmd
    std::shared_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_legged_msgs__msg__HighCmd
    std::shared_ptr<unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HighCmd_ & other) const
  {
    if (this->head != other.head) {
      return false;
    }
    if (this->levelflag != other.levelflag) {
      return false;
    }
    if (this->framereserve != other.framereserve) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->bandwidth != other.bandwidth) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->gaittype != other.gaittype) {
      return false;
    }
    if (this->speedlevel != other.speedlevel) {
      return false;
    }
    if (this->footraiseheight != other.footraiseheight) {
      return false;
    }
    if (this->bodyheight != other.bodyheight) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->euler != other.euler) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->yawspeed != other.yawspeed) {
      return false;
    }
    if (this->bms != other.bms) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    if (this->wirelessremote != other.wirelessremote) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const HighCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HighCmd_

// alias to use template instance with default allocator
using HighCmd =
  unitree_legged_msgs::msg::HighCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__STRUCT_HPP_
