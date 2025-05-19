// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from husarion_ugv_msgs:srv/SetLEDImageAnimation.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__struct.h"
#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__functions.h"

bool husarion_ugv_msgs__msg__led_image_animation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * husarion_ugv_msgs__msg__led_image_animation__convert_to_py(void * raw_ros_message);
bool husarion_ugv_msgs__msg__led_image_animation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * husarion_ugv_msgs__msg__led_image_animation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool husarion_ugv_msgs__srv__set_led_image_animation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("husarion_ugv_msgs.srv._set_led_image_animation.SetLEDImageAnimation_Request", full_classname_dest, 75) == 0);
  }
  husarion_ugv_msgs__srv__SetLEDImageAnimation_Request * ros_message = _ros_message;
  {  // front
    PyObject * field = PyObject_GetAttrString(_pymsg, "front");
    if (!field) {
      return false;
    }
    if (!husarion_ugv_msgs__msg__led_image_animation__convert_from_py(field, &ros_message->front)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear");
    if (!field) {
      return false;
    }
    if (!husarion_ugv_msgs__msg__led_image_animation__convert_from_py(field, &ros_message->rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // interrupting
    PyObject * field = PyObject_GetAttrString(_pymsg, "interrupting");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->interrupting = (Py_True == field);
    Py_DECREF(field);
  }
  {  // repeating
    PyObject * field = PyObject_GetAttrString(_pymsg, "repeating");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->repeating = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * husarion_ugv_msgs__srv__set_led_image_animation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLEDImageAnimation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("husarion_ugv_msgs.srv._set_led_image_animation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLEDImageAnimation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  husarion_ugv_msgs__srv__SetLEDImageAnimation_Request * ros_message = (husarion_ugv_msgs__srv__SetLEDImageAnimation_Request *)raw_ros_message;
  {  // front
    PyObject * field = NULL;
    field = husarion_ugv_msgs__msg__led_image_animation__convert_to_py(&ros_message->front);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear
    PyObject * field = NULL;
    field = husarion_ugv_msgs__msg__led_image_animation__convert_to_py(&ros_message->rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interrupting
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->interrupting ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interrupting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // repeating
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->repeating ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "repeating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_image_animation__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_image_animation__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool husarion_ugv_msgs__srv__set_led_image_animation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("husarion_ugv_msgs.srv._set_led_image_animation.SetLEDImageAnimation_Response", full_classname_dest, 76) == 0);
  }
  husarion_ugv_msgs__srv__SetLEDImageAnimation_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * husarion_ugv_msgs__srv__set_led_image_animation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLEDImageAnimation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("husarion_ugv_msgs.srv._set_led_image_animation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLEDImageAnimation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  husarion_ugv_msgs__srv__SetLEDImageAnimation_Response * ros_message = (husarion_ugv_msgs__srv__SetLEDImageAnimation_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
