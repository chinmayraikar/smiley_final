# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_blitz_drive_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED blitz_drive_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(blitz_drive_FOUND FALSE)
  elseif(NOT blitz_drive_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(blitz_drive_FOUND FALSE)
  endif()
  return()
endif()
set(_blitz_drive_CONFIG_INCLUDED TRUE)

# output package information
if(NOT blitz_drive_FIND_QUIETLY)
  message(STATUS "Found blitz_drive: 0.0.0 (${blitz_drive_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'blitz_drive' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT blitz_drive_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(blitz_drive_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${blitz_drive_DIR}/${_extra}")
endforeach()
