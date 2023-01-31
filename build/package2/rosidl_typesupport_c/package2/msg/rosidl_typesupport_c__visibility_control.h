// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PACKAGE2__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define PACKAGE2__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_package2 __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_package2 __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_package2 __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_package2 __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_package2
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package2 ROSIDL_TYPESUPPORT_C_EXPORT_package2
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package2 ROSIDL_TYPESUPPORT_C_IMPORT_package2
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_package2 __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_package2
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package2 __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_package2
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE2__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
