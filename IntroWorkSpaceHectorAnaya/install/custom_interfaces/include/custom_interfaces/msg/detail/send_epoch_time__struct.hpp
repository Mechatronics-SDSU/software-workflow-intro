// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/SendEpochTime.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_EPOCH_TIME__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_EPOCH_TIME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__SendEpochTime __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__SendEpochTime __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SendEpochTime_
{
  using Type = SendEpochTime_<ContainerAllocator>;

  explicit SendEpochTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->epoch_date = 0ll;
    }
  }

  explicit SendEpochTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->epoch_date = 0ll;
    }
  }

  // field types and members
  using _epoch_date_type =
    int64_t;
  _epoch_date_type epoch_date;

  // setters for named parameter idiom
  Type & set__epoch_date(
    const int64_t & _arg)
  {
    this->epoch_date = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::SendEpochTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::SendEpochTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendEpochTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendEpochTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__SendEpochTime
    std::shared_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__SendEpochTime
    std::shared_ptr<custom_interfaces::msg::SendEpochTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendEpochTime_ & other) const
  {
    if (this->epoch_date != other.epoch_date) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendEpochTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendEpochTime_

// alias to use template instance with default allocator
using SendEpochTime =
  custom_interfaces::msg::SendEpochTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_EPOCH_TIME__STRUCT_HPP_
