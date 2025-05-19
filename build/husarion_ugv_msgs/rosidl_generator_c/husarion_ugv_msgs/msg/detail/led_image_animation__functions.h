// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from husarion_ugv_msgs:msg/LEDImageAnimation.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__MSG__DETAIL__LED_IMAGE_ANIMATION__FUNCTIONS_H_
#define HUSARION_UGV_MSGS__MSG__DETAIL__LED_IMAGE_ANIMATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "husarion_ugv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "husarion_ugv_msgs/msg/detail/led_image_animation__struct.h"

/// Initialize msg/LEDImageAnimation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * husarion_ugv_msgs__msg__LEDImageAnimation
 * )) before or use
 * husarion_ugv_msgs__msg__LEDImageAnimation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__init(husarion_ugv_msgs__msg__LEDImageAnimation * msg);

/// Finalize msg/LEDImageAnimation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__LEDImageAnimation__fini(husarion_ugv_msgs__msg__LEDImageAnimation * msg);

/// Create msg/LEDImageAnimation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__msg__LEDImageAnimation *
husarion_ugv_msgs__msg__LEDImageAnimation__create();

/// Destroy msg/LEDImageAnimation message.
/**
 * It calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__LEDImageAnimation__destroy(husarion_ugv_msgs__msg__LEDImageAnimation * msg);

/// Check for msg/LEDImageAnimation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__are_equal(const husarion_ugv_msgs__msg__LEDImageAnimation * lhs, const husarion_ugv_msgs__msg__LEDImageAnimation * rhs);

/// Copy a msg/LEDImageAnimation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__copy(
  const husarion_ugv_msgs__msg__LEDImageAnimation * input,
  husarion_ugv_msgs__msg__LEDImageAnimation * output);

/// Initialize array of msg/LEDImageAnimation messages.
/**
 * It allocates the memory for the number of elements and calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__init(husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * array, size_t size);

/// Finalize array of msg/LEDImageAnimation messages.
/**
 * It calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__fini(husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * array);

/// Create array of msg/LEDImageAnimation messages.
/**
 * It allocates the memory for the array and calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence *
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__create(size_t size);

/// Destroy array of msg/LEDImageAnimation messages.
/**
 * It calls
 * husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__destroy(husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * array);

/// Check for msg/LEDImageAnimation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__are_equal(const husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * lhs, const husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * rhs);

/// Copy an array of msg/LEDImageAnimation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__LEDImageAnimation__Sequence__copy(
  const husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * input,
  husarion_ugv_msgs__msg__LEDImageAnimation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__MSG__DETAIL__LED_IMAGE_ANIMATION__FUNCTIONS_H_
