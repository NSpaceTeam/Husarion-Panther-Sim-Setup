// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from husarion_ugv_msgs:srv/SetLEDAnimation.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_ANIMATION__STRUCT_H_
#define HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_ANIMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'animation'
#include "husarion_ugv_msgs/msg/detail/led_animation__struct.h"

/// Struct defined in srv/SetLEDAnimation in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__srv__SetLEDAnimation_Request
{
  husarion_ugv_msgs__msg__LEDAnimation animation;
  bool repeating;
} husarion_ugv_msgs__srv__SetLEDAnimation_Request;

// Struct for a sequence of husarion_ugv_msgs__srv__SetLEDAnimation_Request.
typedef struct husarion_ugv_msgs__srv__SetLEDAnimation_Request__Sequence
{
  husarion_ugv_msgs__srv__SetLEDAnimation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__srv__SetLEDAnimation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLEDAnimation in the package husarion_ugv_msgs.
typedef struct husarion_ugv_msgs__srv__SetLEDAnimation_Response
{
  bool success;
  rosidl_runtime_c__String message;
} husarion_ugv_msgs__srv__SetLEDAnimation_Response;

// Struct for a sequence of husarion_ugv_msgs__srv__SetLEDAnimation_Response.
typedef struct husarion_ugv_msgs__srv__SetLEDAnimation_Response__Sequence
{
  husarion_ugv_msgs__srv__SetLEDAnimation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} husarion_ugv_msgs__srv__SetLEDAnimation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_ANIMATION__STRUCT_H_
