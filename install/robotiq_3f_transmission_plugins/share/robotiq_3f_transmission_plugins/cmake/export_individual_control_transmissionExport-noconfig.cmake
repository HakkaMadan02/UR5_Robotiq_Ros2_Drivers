#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robotiq_3f_transmission_plugins::individual_control_transmission" for configuration ""
set_property(TARGET robotiq_3f_transmission_plugins::individual_control_transmission APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robotiq_3f_transmission_plugins::individual_control_transmission PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libindividual_control_transmission.so"
  IMPORTED_SONAME_NOCONFIG "libindividual_control_transmission.so"
  )

list(APPEND _cmake_import_check_targets robotiq_3f_transmission_plugins::individual_control_transmission )
list(APPEND _cmake_import_check_files_for_robotiq_3f_transmission_plugins::individual_control_transmission "${_IMPORT_PREFIX}/lib/libindividual_control_transmission.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
