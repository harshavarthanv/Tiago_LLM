# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pal_robotiq_controller_configuration_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pal_robotiq_controller_configuration_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pal_robotiq_controller_configuration_FOUND FALSE)
  elseif(NOT pal_robotiq_controller_configuration_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pal_robotiq_controller_configuration_FOUND FALSE)
  endif()
  return()
endif()
set(_pal_robotiq_controller_configuration_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pal_robotiq_controller_configuration_FIND_QUIETLY)
  message(STATUS "Found pal_robotiq_controller_configuration: 2.2.0 (${pal_robotiq_controller_configuration_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pal_robotiq_controller_configuration' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pal_robotiq_controller_configuration_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pal_robotiq_controller_configuration_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pal_robotiq_controller_configuration_DIR}/${_extra}")
endforeach()
