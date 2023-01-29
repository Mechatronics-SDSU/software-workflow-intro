// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PACKAGE1__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define PACKAGE1__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_package1 __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_package1 __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_package1 __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_package1 __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_package1
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package1 ROSIDL_TYPESUPPORT_C_EXPORT_package1
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package1 ROSIDL_TYPESUPPORT_C_IMPORT_package1
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_package1 __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_package1
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package1 __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package1
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE1__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
