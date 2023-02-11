// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Unixtime.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__UNIXTIME__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__UNIXTIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Unixtime __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Unixtime __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Unixtime_
{
  using Type = Unixtime_<ContainerAllocator>;

  explicit Unixtime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unixtime = 0ll;
    }
  }

  explicit Unixtime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unixtime = 0ll;
    }
  }

  // field types and members
  using _unixtime_type =
    int64_t;
  _unixtime_type unixtime;

  // setters for named parameter idiom
  Type & set__unixtime(
    const int64_t & _arg)
  {
    this->unixtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Unixtime_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Unixtime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Unixtime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Unixtime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Unixtime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Unixtime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Unixtime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Unixtime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Unixtime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Unixtime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Unixtime
    std::shared_ptr<interfaces::msg::Unixtime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Unixtime
    std::shared_ptr<interfaces::msg::Unixtime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Unixtime_ & other) const
  {
    if (this->unixtime != other.unixtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Unixtime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Unixtime_

// alias to use template instance with default allocator
using Unixtime =
  interfaces::msg::Unixtime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__UNIXTIME__STRUCT_HPP_
