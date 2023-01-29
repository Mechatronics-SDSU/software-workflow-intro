// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from package1:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE1__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_
#define PACKAGE1__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_

#include "package1/srv/detail/convert_time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<package1::srv::ConvertTime_Request>()
{
  return "package1::srv::ConvertTime_Request";
}

template<>
inline const char * name<package1::srv::ConvertTime_Request>()
{
  return "package1/srv/ConvertTime_Request";
}

template<>
struct has_fixed_size<package1::srv::ConvertTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<package1::srv::ConvertTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<package1::srv::ConvertTime_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<package1::srv::ConvertTime_Response>()
{
  return "package1::srv::ConvertTime_Response";
}

template<>
inline const char * name<package1::srv::ConvertTime_Response>()
{
  return "package1/srv/ConvertTime_Response";
}

template<>
struct has_fixed_size<package1::srv::ConvertTime_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<package1::srv::ConvertTime_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<package1::srv::ConvertTime_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<package1::srv::ConvertTime>()
{
  return "package1::srv::ConvertTime";
}

template<>
inline const char * name<package1::srv::ConvertTime>()
{
  return "package1/srv/ConvertTime";
}

template<>
struct has_fixed_size<package1::srv::ConvertTime>
  : std::integral_constant<
    bool,
    has_fixed_size<package1::srv::ConvertTime_Request>::value &&
    has_fixed_size<package1::srv::ConvertTime_Response>::value
  >
{
};

template<>
struct has_bounded_size<package1::srv::ConvertTime>
  : std::integral_constant<
    bool,
    has_bounded_size<package1::srv::ConvertTime_Request>::value &&
    has_bounded_size<package1::srv::ConvertTime_Response>::value
  >
{
};

template<>
struct is_service<package1::srv::ConvertTime>
  : std::true_type
{
};

template<>
struct is_service_request<package1::srv::ConvertTime_Request>
  : std::true_type
{
};

template<>
struct is_service_response<package1::srv::ConvertTime_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PACKAGE1__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_
