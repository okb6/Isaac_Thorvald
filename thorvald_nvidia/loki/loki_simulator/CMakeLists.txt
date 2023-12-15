cmake_minimum_required(VERSION 3.8)
project(loki_simulator)

# Find packages and libraries
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)


set(dependencies
  rclcpp
)


install(DIRECTORY worlds Thorvald_Grape_Urdf 
  DESTINATION share/${PROJECT_NAME}
)

ament_package()