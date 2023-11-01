set(_AMENT_PACKAGE_NAME "rasberry_gazebo")
set(rasberry_gazebo_VERSION "2.0.0")
set(rasberry_gazebo_MAINTAINER "TODO <okb6@cornell.edu>")
set(rasberry_gazebo_BUILD_DEPENDS "robot_localization" "robot_state_publisher" "rclcpp" "rclpy" "std_msgs" "control_msgs" "sensor_msgs" "geometry_msgs" "trajectory_msgs" "tf2" "xacro" "gazebo_ros")
set(rasberry_gazebo_BUILDTOOL_DEPENDS "ament_cmake")
set(rasberry_gazebo_BUILD_EXPORT_DEPENDS "robot_localization" "robot_state_publisher" "rclcpp" "rclpy" "std_msgs" "control_msgs" "sensor_msgs" "geometry_msgs" "trajectory_msgs" "tf2" "xacro" "gazebo_ros")
set(rasberry_gazebo_BUILDTOOL_EXPORT_DEPENDS )
set(rasberry_gazebo_EXEC_DEPENDS "robot_localization" "robot_state_publisher" "rclcpp" "rclpy" "std_msgs" "control_msgs" "sensor_msgs" "geometry_msgs" "trajectory_msgs" "tf2" "xacro" "gazebo_ros")
set(rasberry_gazebo_TEST_DEPENDS )
set(rasberry_gazebo_GROUP_DEPENDS )
set(rasberry_gazebo_MEMBER_OF_GROUPS )
set(rasberry_gazebo_DEPRECATED "")
set(rasberry_gazebo_EXPORT_TAGS)
list(APPEND rasberry_gazebo_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND rasberry_gazebo_EXPORT_TAGS "<gazebo_ros gazebo_media_path=\"${prefix}\" gazebo_model_path=\"models\" gazebo_plugin_path=\"lib\"/>")