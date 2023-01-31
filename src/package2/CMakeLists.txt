cmake_minimum_required(VERSION 3.5)
project(package2)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(time_types REQUIRED)

find_package(rosidl_default_generators REQUIRED)

add_executable(listener src/subscriber_member_function.cpp)
ament_target_dependencies(listener rclcpp time_types)

install(TARGETS
  listener
  DESTINATION lib/${PROJECT_NAME})

ament_package()
