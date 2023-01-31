// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from package2:srv/ConvertTime.idl
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
#include "package2/srv/detail/convert_time__struct.h"
#include "package2/srv/detail/convert_time__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool package2__srv__convert_time__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("package2.srv._convert_time.ConvertTime_Request", full_classname_dest, 46) == 0);
  }
  package2__srv__ConvertTime_Request * ros_message = _ros_message;
  {  // unixtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "unixtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unixtime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * package2__srv__convert_time__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConvertTime_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("package2.srv._convert_time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConvertTime_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  package2__srv__ConvertTime_Request * ros_message = (package2__srv__ConvertTime_Request *)raw_ros_message;
  {  // unixtime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->unixtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unixtime", field);
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
// #include "package2/srv/detail/convert_time__struct.h"
// already included above
// #include "package2/srv/detail/convert_time__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool package2__srv__convert_time__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("package2.srv._convert_time.ConvertTime_Response", full_classname_dest, 47) == 0);
  }
  package2__srv__ConvertTime_Response * ros_message = _ros_message;
  {  // humantime
    PyObject * field = PyObject_GetAttrString(_pymsg, "humantime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->humantime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * package2__srv__convert_time__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConvertTime_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("package2.srv._convert_time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConvertTime_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  package2__srv__ConvertTime_Response * ros_message = (package2__srv__ConvertTime_Response *)raw_ros_message;
  {  // humantime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->humantime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "humantime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}