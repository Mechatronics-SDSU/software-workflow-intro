// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/SendReadDate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__SendReadDate __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__SendReadDate __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SendReadDate_
{
  using Type = SendReadDate_<ContainerAllocator>;

  explicit SendReadDate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->readable_date = "";
    }
  }

  explicit SendReadDate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : readable_date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->readable_date = "";
    }
  }

  // field types and members
  using _readable_date_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _readable_date_type readable_date;

  // setters for named parameter idiom
  Type & set__readable_date(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->readable_date = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::SendReadDate_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::SendReadDate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendReadDate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SendReadDate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__SendReadDate
    std::shared_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__SendReadDate
    std::shared_ptr<custom_interfaces::msg::SendReadDate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendReadDate_ & other) const
  {
    if (this->readable_date != other.readable_date) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendReadDate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendReadDate_

// alias to use template instance with default allocator
using SendReadDate =
  custom_interfaces::msg::SendReadDate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_HPP_
