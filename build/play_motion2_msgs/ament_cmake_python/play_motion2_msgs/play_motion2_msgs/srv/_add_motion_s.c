// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from play_motion2_msgs:srv/AddMotion.idl
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
#include "play_motion2_msgs/srv/detail/add_motion__struct.h"
#include "play_motion2_msgs/srv/detail/add_motion__functions.h"

bool play_motion2_msgs__msg__motion__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * play_motion2_msgs__msg__motion__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool play_motion2_msgs__srv__add_motion__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("play_motion2_msgs.srv._add_motion.AddMotion_Request", full_classname_dest, 51) == 0);
  }
  play_motion2_msgs__srv__AddMotion_Request * ros_message = _ros_message;
  {  // motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion");
    if (!field) {
      return false;
    }
    if (!play_motion2_msgs__msg__motion__convert_from_py(field, &ros_message->motion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // overwrite
    PyObject * field = PyObject_GetAttrString(_pymsg, "overwrite");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overwrite = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * play_motion2_msgs__srv__add_motion__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddMotion_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("play_motion2_msgs.srv._add_motion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddMotion_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  play_motion2_msgs__srv__AddMotion_Request * ros_message = (play_motion2_msgs__srv__AddMotion_Request *)raw_ros_message;
  {  // motion
    PyObject * field = NULL;
    field = play_motion2_msgs__msg__motion__convert_to_py(&ros_message->motion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overwrite
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overwrite ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overwrite", field);
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
// #include "play_motion2_msgs/srv/detail/add_motion__struct.h"
// already included above
// #include "play_motion2_msgs/srv/detail/add_motion__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool play_motion2_msgs__srv__add_motion__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("play_motion2_msgs.srv._add_motion.AddMotion_Response", full_classname_dest, 52) == 0);
  }
  play_motion2_msgs__srv__AddMotion_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * play_motion2_msgs__srv__add_motion__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddMotion_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("play_motion2_msgs.srv._add_motion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddMotion_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  play_motion2_msgs__srv__AddMotion_Response * ros_message = (play_motion2_msgs__srv__AddMotion_Response *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
