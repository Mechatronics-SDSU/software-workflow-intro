// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Humantime.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__HUMANTIME__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__HUMANTIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/humantime__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Humantime_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: unixtime
  {
    out << "unixtime: ";
    rosidl_generator_traits::value_to_yaml(msg.unixtime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Humantime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unixtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unixtime: ";
    rosidl_generator_traits::value_to_yaml(msg.unixtime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Humantime_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Humantime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Humantime_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Humantime_Request>()
{
  return "interfaces::srv::Humantime_Request";
}

template<>
inline const char * name<interfaces::srv::Humantime_Request>()
{
  return "interfaces/srv/Humantime_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Humantime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Humantime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Humantime_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Humantime_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: humantime
  {
    out << "humantime: ";
    rosidl_generator_traits::value_to_yaml(msg.humantime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Humantime_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: humantime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "humantime: ";
    rosidl_generator_traits::value_to_yaml(msg.humantime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Humantime_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::Humantime_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::Humantime_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::Humantime_Response>()
{
  return "interfaces::srv::Humantime_Response";
}

template<>
inline const char * name<interfaces::srv::Humantime_Response>()
{
  return "interfaces/srv/Humantime_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Humantime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Humantime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Humantime_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Humantime>()
{
  return "interfaces::srv::Humantime";
}

template<>
inline const char * name<interfaces::srv::Humantime>()
{
  return "interfaces/srv/Humantime";
}

template<>
struct has_fixed_size<interfaces::srv::Humantime>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Humantime_Request>::value &&
    has_fixed_size<interfaces::srv::Humantime_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Humantime>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Humantime_Request>::value &&
    has_bounded_size<interfaces::srv::Humantime_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Humantime>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Humantime_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Humantime_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__HUMANTIME__TRAITS_HPP_
