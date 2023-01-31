cmake_minimum_required(VERSION 3.5)
project(package1)

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
find_package(time_types REQUIRED) # package with custom data types for communication

# find_package(example_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

add_executable(talker src/publisher_member_function.cpp)
ament_target_dependencies(talker rclcpp time_types)

install(TARGETS
  talker
  DESTINATION lib/${PROJECT_NAME})

ament_package()
