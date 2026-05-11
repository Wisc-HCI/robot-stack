#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robot_motion_interface::robot_motion_interface" for configuration "Release"
set_property(TARGET robot_motion_interface::robot_motion_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(robot_motion_interface::robot_motion_interface PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librobot_motion_interface.so"
  IMPORTED_SONAME_RELEASE "librobot_motion_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS robot_motion_interface::robot_motion_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_robot_motion_interface::robot_motion_interface "${_IMPORT_PREFIX}/lib/librobot_motion_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
