// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from husarion_ugv_msgs:srv/SetLEDBrightness.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__FUNCTIONS_H_
#define HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "husarion_ugv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "husarion_ugv_msgs/srv/detail/set_led_brightness__struct.h"

/// Initialize srv/SetLEDBrightness message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request
 * )) before or use
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Request__init(husarion_ugv_msgs__srv__SetLEDBrightness_Request * msg);

/// Finalize srv/SetLEDBrightness message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Request__fini(husarion_ugv_msgs__srv__SetLEDBrightness_Request * msg);

/// Create srv/SetLEDBrightness message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__srv__SetLEDBrightness_Request *
husarion_ugv_msgs__srv__SetLEDBrightness_Request__create();

/// Destroy srv/SetLEDBrightness message.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Request__destroy(husarion_ugv_msgs__srv__SetLEDBrightness_Request * msg);

/// Check for srv/SetLEDBrightness message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Request__are_equal(const husarion_ugv_msgs__srv__SetLEDBrightness_Request * lhs, const husarion_ugv_msgs__srv__SetLEDBrightness_Request * rhs);

/// Copy a srv/SetLEDBrightness message.
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
husarion_ugv_msgs__srv__SetLEDBrightness_Request__copy(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request * input,
  husarion_ugv_msgs__srv__SetLEDBrightness_Request * output);

/// Initialize array of srv/SetLEDBrightness messages.
/**
 * It allocates the memory for the number of elements and calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__init(husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLEDBrightness messages.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__fini(husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * array);

/// Create array of srv/SetLEDBrightness messages.
/**
 * It allocates the memory for the array and calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence *
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLEDBrightness messages.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__destroy(husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * array);

/// Check for srv/SetLEDBrightness message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__are_equal(const husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * lhs, const husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * rhs);

/// Copy an array of srv/SetLEDBrightness messages.
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
husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence__copy(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * input,
  husarion_ugv_msgs__srv__SetLEDBrightness_Request__Sequence * output);

/// Initialize srv/SetLEDBrightness message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response
 * )) before or use
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Response__init(husarion_ugv_msgs__srv__SetLEDBrightness_Response * msg);

/// Finalize srv/SetLEDBrightness message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Response__fini(husarion_ugv_msgs__srv__SetLEDBrightness_Response * msg);

/// Create srv/SetLEDBrightness message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__srv__SetLEDBrightness_Response *
husarion_ugv_msgs__srv__SetLEDBrightness_Response__create();

/// Destroy srv/SetLEDBrightness message.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Response__destroy(husarion_ugv_msgs__srv__SetLEDBrightness_Response * msg);

/// Check for srv/SetLEDBrightness message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Response__are_equal(const husarion_ugv_msgs__srv__SetLEDBrightness_Response * lhs, const husarion_ugv_msgs__srv__SetLEDBrightness_Response * rhs);

/// Copy a srv/SetLEDBrightness message.
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
husarion_ugv_msgs__srv__SetLEDBrightness_Response__copy(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response * input,
  husarion_ugv_msgs__srv__SetLEDBrightness_Response * output);

/// Initialize array of srv/SetLEDBrightness messages.
/**
 * It allocates the memory for the number of elements and calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__init(husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLEDBrightness messages.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__fini(husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * array);

/// Create array of srv/SetLEDBrightness messages.
/**
 * It allocates the memory for the array and calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence *
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLEDBrightness messages.
/**
 * It calls
 * husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__destroy(husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * array);

/// Check for srv/SetLEDBrightness message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__are_equal(const husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * lhs, const husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * rhs);

/// Copy an array of srv/SetLEDBrightness messages.
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
husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence__copy(
  const husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * input,
  husarion_ugv_msgs__srv__SetLEDBrightness_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_BRIGHTNESS__FUNCTIONS_H_
