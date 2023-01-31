// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from package2:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE2__SRV__DETAIL__CONVERT_TIME__STRUCT_HPP_
#define PACKAGE2__SRV__DETAIL__CONVERT_TIME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__package2__srv__ConvertTime_Request __attribute__((deprecated))
#else
# define DEPRECATED__package2__srv__ConvertTime_Request __declspec(deprecated)
#endif

namespace package2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertTime_Request_
{
  using Type = ConvertTime_Request_<ContainerAllocator>;

  explicit ConvertTime_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unixtime = 0ll;
    }
  }

  explicit ConvertTime_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    package2::srv::ConvertTime_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const package2::srv::ConvertTime_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      package2::srv::ConvertTime_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      package2::srv::ConvertTime_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__package2__srv__ConvertTime_Request
    std::shared_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__package2__srv__ConvertTime_Request
    std::shared_ptr<package2::srv::ConvertTime_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertTime_Request_ & other) const
  {
    if (this->unixtime != other.unixtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertTime_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertTime_Request_

// alias to use template instance with default allocator
using ConvertTime_Request =
  package2::srv::ConvertTime_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace package2


#ifndef _WIN32
# define DEPRECATED__package2__srv__ConvertTime_Response __attribute__((deprecated))
#else
# define DEPRECATED__package2__srv__ConvertTime_Response __declspec(deprecated)
#endif

namespace package2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertTime_Response_
{
  using Type = ConvertTime_Response_<ContainerAllocator>;

  explicit ConvertTime_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->humantime = 0ll;
    }
  }

  explicit ConvertTime_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->humantime = 0ll;
    }
  }

  // field types and members
  using _humantime_type =
    int64_t;
  _humantime_type humantime;

  // setters for named parameter idiom
  Type & set__humantime(
    const int64_t & _arg)
  {
    this->humantime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    package2::srv::ConvertTime_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const package2::srv::ConvertTime_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      package2::srv::ConvertTime_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      package2::srv::ConvertTime_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__package2__srv__ConvertTime_Response
    std::shared_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__package2__srv__ConvertTime_Response
    std::shared_ptr<package2::srv::ConvertTime_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertTime_Response_ & other) const
  {
    if (this->humantime != other.humantime) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertTime_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertTime_Response_

// alias to use template instance with default allocator
using ConvertTime_Response =
  package2::srv::ConvertTime_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace package2

namespace package2
{

namespace srv
{

struct ConvertTime
{
  using Request = package2::srv::ConvertTime_Request;
  using Response = package2::srv::ConvertTime_Response;
};

}  // namespace srv

}  // namespace package2

#endif  // PACKAGE2__SRV__DETAIL__CONVERT_TIME__STRUCT_HPP_
