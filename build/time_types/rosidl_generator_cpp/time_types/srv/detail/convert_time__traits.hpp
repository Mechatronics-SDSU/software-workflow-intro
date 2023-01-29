// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_
#define TIME_TYPES__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_

#include "time_types/srv/detail/convert_time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_types::srv::ConvertTime_Request>()
{
  return "time_types::srv::ConvertTime_Request";
}

template<>
inline const char * name<time_types::srv::ConvertTime_Request>()
{
  return "time_types/srv/ConvertTime_Request";
}

template<>
struct has_fixed_size<time_types::srv::ConvertTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<time_types::srv::ConvertTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<time_types::srv::ConvertTime_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_types::srv::ConvertTime_Response>()
{
  return "time_types::srv::ConvertTime_Response";
}

template<>
inline const char * name<time_types::srv::ConvertTime_Response>()
{
  return "time_types/srv/ConvertTime_Response";
}

template<>
struct has_fixed_size<time_types::srv::ConvertTime_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<time_types::srv::ConvertTime_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<time_types::srv::ConvertTime_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_types::srv::ConvertTime>()
{
  return "time_types::srv::ConvertTime";
}

template<>
inline const char * name<time_types::srv::ConvertTime>()
{
  return "time_types/srv/ConvertTime";
}

template<>
struct has_fixed_size<time_types::srv::ConvertTime>
  : std::integral_constant<
    bool,
    has_fixed_size<time_types::srv::ConvertTime_Request>::value &&
    has_fixed_size<time_types::srv::ConvertTime_Response>::value
  >
{
};

template<>
struct has_bounded_size<time_types::srv::ConvertTime>
  : std::integral_constant<
    bool,
    has_bounded_size<time_types::srv::ConvertTime_Request>::value &&
    has_bounded_size<time_types::srv::ConvertTime_Response>::value
  >
{
};

template<>
struct is_service<time_types::srv::ConvertTime>
  : std::true_type
{
};

template<>
struct is_service_request<time_types::srv::ConvertTime_Request>
  : std::true_type
{
};

template<>
struct is_service_response<time_types::srv::ConvertTime_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIME_TYPES__SRV__DETAIL__CONVERT_TIME__TRAITS_HPP_
