// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Humantime.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__HUMANTIME__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__HUMANTIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Humantime_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Humantime_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Humantime_Request_
{
  using Type = Humantime_Request_<ContainerAllocator>;

  explicit Humantime_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unixtime = 0ll;
    }
  }

  explicit Humantime_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::Humantime_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Humantime_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Humantime_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Humantime_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Humantime_Request
    std::shared_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Humantime_Request
    std::shared_ptr<interfaces::srv::Humantime_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Humantime_Request_ & other) const
  {
    if (this->unixtime != other.unixtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Humantime_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Humantime_Request_

// alias to use template instance with default allocator
using Humantime_Request =
  interfaces::srv::Humantime_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Humantime_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Humantime_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Humantime_Response_
{
  using Type = Humantime_Response_<ContainerAllocator>;

  explicit Humantime_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->humantime = "";
    }
  }

  explicit Humantime_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : humantime(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->humantime = "";
    }
  }

  // field types and members
  using _humantime_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _humantime_type humantime;

  // setters for named parameter idiom
  Type & set__humantime(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->humantime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Humantime_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Humantime_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Humantime_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Humantime_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Humantime_Response
    std::shared_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Humantime_Response
    std::shared_ptr<interfaces::srv::Humantime_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Humantime_Response_ & other) const
  {
    if (this->humantime != other.humantime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Humantime_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Humantime_Response_

// alias to use template instance with default allocator
using Humantime_Response =
  interfaces::srv::Humantime_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Humantime
{
  using Request = interfaces::srv::Humantime_Request;
  using Response = interfaces::srv::Humantime_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__HUMANTIME__STRUCT_HPP_
