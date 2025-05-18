// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from husarion_ugv_msgs:msg/DriverStateNamed.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__MSG__DETAIL__DRIVER_STATE_NAMED__FUNCTIONS_H_
#define HUSARION_UGV_MSGS__MSG__DETAIL__DRIVER_STATE_NAMED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "husarion_ugv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "husarion_ugv_msgs/msg/detail/driver_state_named__struct.h"

/// Initialize msg/DriverStateNamed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * husarion_ugv_msgs__msg__DriverStateNamed
 * )) before or use
 * husarion_ugv_msgs__msg__DriverStateNamed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__DriverStateNamed__init(husarion_ugv_msgs__msg__DriverStateNamed * msg);

/// Finalize msg/DriverStateNamed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__DriverStateNamed__fini(husarion_ugv_msgs__msg__DriverStateNamed * msg);

/// Create msg/DriverStateNamed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * husarion_ugv_msgs__msg__DriverStateNamed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__msg__DriverStateNamed *
husarion_ugv_msgs__msg__DriverStateNamed__create();

/// Destroy msg/DriverStateNamed message.
/**
 * It calls
 * husarion_ugv_msgs__msg__DriverStateNamed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__DriverStateNamed__destroy(husarion_ugv_msgs__msg__DriverStateNamed * msg);

/// Check for msg/DriverStateNamed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__DriverStateNamed__are_equal(const husarion_ugv_msgs__msg__DriverStateNamed * lhs, const husarion_ugv_msgs__msg__DriverStateNamed * rhs);

/// Copy a msg/DriverStateNamed message.
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
husarion_ugv_msgs__msg__DriverStateNamed__copy(
  const husarion_ugv_msgs__msg__DriverStateNamed * input,
  husarion_ugv_msgs__msg__DriverStateNamed * output);

/// Initialize array of msg/DriverStateNamed messages.
/**
 * It allocates the memory for the number of elements and calls
 * husarion_ugv_msgs__msg__DriverStateNamed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__init(husarion_ugv_msgs__msg__DriverStateNamed__Sequence * array, size_t size);

/// Finalize array of msg/DriverStateNamed messages.
/**
 * It calls
 * husarion_ugv_msgs__msg__DriverStateNamed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__fini(husarion_ugv_msgs__msg__DriverStateNamed__Sequence * array);

/// Create array of msg/DriverStateNamed messages.
/**
 * It allocates the memory for the array and calls
 * husarion_ugv_msgs__msg__DriverStateNamed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
husarion_ugv_msgs__msg__DriverStateNamed__Sequence *
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__create(size_t size);

/// Destroy array of msg/DriverStateNamed messages.
/**
 * It calls
 * husarion_ugv_msgs__msg__DriverStateNamed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
void
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__destroy(husarion_ugv_msgs__msg__DriverStateNamed__Sequence * array);

/// Check for msg/DriverStateNamed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_husarion_ugv_msgs
bool
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__are_equal(const husarion_ugv_msgs__msg__DriverStateNamed__Sequence * lhs, const husarion_ugv_msgs__msg__DriverStateNamed__Sequence * rhs);

/// Copy an array of msg/DriverStateNamed messages.
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
husarion_ugv_msgs__msg__DriverStateNamed__Sequence__copy(
  const husarion_ugv_msgs__msg__DriverStateNamed__Sequence * input,
  husarion_ugv_msgs__msg__DriverStateNamed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HUSARION_UGV_MSGS__MSG__DETAIL__DRIVER_STATE_NAMED__FUNCTIONS_H_
