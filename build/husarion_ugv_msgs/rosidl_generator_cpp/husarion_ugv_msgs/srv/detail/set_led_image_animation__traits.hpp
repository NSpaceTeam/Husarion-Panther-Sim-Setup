// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from husarion_ugv_msgs:srv/SetLEDImageAnimation.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__TRAITS_HPP_
#define HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'front'
// Member 'rear'
#include "husarion_ugv_msgs/msg/detail/led_image_animation__traits.hpp"

namespace husarion_ugv_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLEDImageAnimation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: front
  {
    out << "front: ";
    to_flow_style_yaml(msg.front, out);
    out << ", ";
  }

  // member: rear
  {
    out << "rear: ";
    to_flow_style_yaml(msg.rear, out);
    out << ", ";
  }

  // member: interrupting
  {
    out << "interrupting: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupting, out);
    out << ", ";
  }

  // member: repeating
  {
    out << "repeating: ";
    rosidl_generator_traits::value_to_yaml(msg.repeating, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLEDImageAnimation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front:\n";
    to_block_style_yaml(msg.front, out, indentation + 2);
  }

  // member: rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear:\n";
    to_block_style_yaml(msg.rear, out, indentation + 2);
  }

  // member: interrupting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interrupting: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupting, out);
    out << "\n";
  }

  // member: repeating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repeating: ";
    rosidl_generator_traits::value_to_yaml(msg.repeating, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLEDImageAnimation_Request & msg, bool use_flow_style = false)
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

}  // namespace husarion_ugv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use husarion_ugv_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const husarion_ugv_msgs::srv::SetLEDImageAnimation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  husarion_ugv_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use husarion_ugv_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const husarion_ugv_msgs::srv::SetLEDImageAnimation_Request & msg)
{
  return husarion_ugv_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>()
{
  return "husarion_ugv_msgs::srv::SetLEDImageAnimation_Request";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>()
{
  return "husarion_ugv_msgs/srv/SetLEDImageAnimation_Request";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>
  : std::integral_constant<bool, has_fixed_size<husarion_ugv_msgs::msg::LEDImageAnimation>::value> {};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>
  : std::integral_constant<bool, has_bounded_size<husarion_ugv_msgs::msg::LEDImageAnimation>::value> {};

template<>
struct is_message<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace husarion_ugv_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLEDImageAnimation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLEDImageAnimation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLEDImageAnimation_Response & msg, bool use_flow_style = false)
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

}  // namespace husarion_ugv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use husarion_ugv_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const husarion_ugv_msgs::srv::SetLEDImageAnimation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  husarion_ugv_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use husarion_ugv_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const husarion_ugv_msgs::srv::SetLEDImageAnimation_Response & msg)
{
  return husarion_ugv_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>()
{
  return "husarion_ugv_msgs::srv::SetLEDImageAnimation_Response";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>()
{
  return "husarion_ugv_msgs/srv/SetLEDImageAnimation_Response";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<husarion_ugv_msgs::srv::SetLEDImageAnimation>()
{
  return "husarion_ugv_msgs::srv::SetLEDImageAnimation";
}

template<>
inline const char * name<husarion_ugv_msgs::srv::SetLEDImageAnimation>()
{
  return "husarion_ugv_msgs/srv/SetLEDImageAnimation";
}

template<>
struct has_fixed_size<husarion_ugv_msgs::srv::SetLEDImageAnimation>
  : std::integral_constant<
    bool,
    has_fixed_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>::value &&
    has_fixed_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>::value
  >
{
};

template<>
struct has_bounded_size<husarion_ugv_msgs::srv::SetLEDImageAnimation>
  : std::integral_constant<
    bool,
    has_bounded_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>::value &&
    has_bounded_size<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>::value
  >
{
};

template<>
struct is_service<husarion_ugv_msgs::srv::SetLEDImageAnimation>
  : std::true_type
{
};

template<>
struct is_service_request<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__TRAITS_HPP_
