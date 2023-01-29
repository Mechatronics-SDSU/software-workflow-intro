// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__MSG__DETAIL__TIME__TRAITS_HPP_
#define TIME_TYPES__MSG__DETAIL__TIME__TRAITS_HPP_

#include "time_types/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_types::msg::Time>()
{
  return "time_types::msg::Time";
}

template<>
inline const char * name<time_types::msg::Time>()
{
  return "time_types/msg/Time";
}

template<>
struct has_fixed_size<time_types::msg::Time>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<time_types::msg::Time>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<time_types::msg::Time>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIME_TYPES__MSG__DETAIL__TIME__TRAITS_HPP_
