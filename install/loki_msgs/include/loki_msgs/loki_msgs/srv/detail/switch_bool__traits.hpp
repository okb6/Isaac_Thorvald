// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/SwitchBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/switch_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: on
  {
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchBool_Request & msg, bool use_flow_style = false)
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

}  // namespace loki_msgs

namespace rosidl_generator_traits
{

[[deprecated("use loki_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const loki_msgs::srv::SwitchBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::SwitchBool_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::SwitchBool_Request>()
{
  return "loki_msgs::srv::SwitchBool_Request";
}

template<>
inline const char * name<loki_msgs::srv::SwitchBool_Request>()
{
  return "loki_msgs/srv/SwitchBool_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::SwitchBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::SwitchBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::SwitchBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchBool_Response & msg, bool use_flow_style = false)
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

}  // namespace loki_msgs

namespace rosidl_generator_traits
{

[[deprecated("use loki_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const loki_msgs::srv::SwitchBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::SwitchBool_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::SwitchBool_Response>()
{
  return "loki_msgs::srv::SwitchBool_Response";
}

template<>
inline const char * name<loki_msgs::srv::SwitchBool_Response>()
{
  return "loki_msgs/srv/SwitchBool_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::SwitchBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::SwitchBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::SwitchBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::SwitchBool>()
{
  return "loki_msgs::srv::SwitchBool";
}

template<>
inline const char * name<loki_msgs::srv::SwitchBool>()
{
  return "loki_msgs/srv/SwitchBool";
}

template<>
struct has_fixed_size<loki_msgs::srv::SwitchBool>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::SwitchBool_Request>::value &&
    has_fixed_size<loki_msgs::srv::SwitchBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::SwitchBool>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::SwitchBool_Request>::value &&
    has_bounded_size<loki_msgs::srv::SwitchBool_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::SwitchBool>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::SwitchBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::SwitchBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__TRAITS_HPP_
