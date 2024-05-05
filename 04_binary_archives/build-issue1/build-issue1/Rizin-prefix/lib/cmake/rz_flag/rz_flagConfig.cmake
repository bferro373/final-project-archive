################################################################################
#
# This module provides the following imported targets, if found:
#
#  rz_flag::rz_flag
#
# This file is intended to be consumed by clients who wish to use rz_flag from CMake.
# The recommended way to use find this module is using `find_package(Rizin COMPONENTS ...)`.
#
# Provides the following variables
# rz_flag_FOUND        - Flag for indicating that rz_flag package has been found
# rz_flag_VERSION      - Version of rz_flag
# rz_flag_INCLUDE_DIRS - Directories to include
# rz_flag_LIBRARY      - Path to the single library that this module represents, without dependencies
# rz_flag_LIBRARIES    - Libraries to link
# rz_flag_LIBRARY_DIRS - Library directories to search for link libraries
# rz_flag_PLUGINDIR    - Directory where plugins are placed, without the prefix part
#
################################################################################

set(RIZIN_MODULE_PREFIXED rz_flag)
set(rz_flag_VERSION 0.8.0)

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../.." ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

set(rz_flag_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/librz" "${PACKAGE_PREFIX_DIR}/include/librz/sdb")
set_and_check(rz_flag_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")
find_library(rz_flag_LIBRARY NAMES rz_flag HINTS "${rz_flag_LIBRARY_DIRS}" NO_DEFAULT_PATH REQUIRED)
set(rz_flag_LIBRARIES "${rz_flag_LIBRARY}")
set(_rz_flag_DEPENDENCIES rz_util)
set(rz_flag_PLUGINDIR lib/rizin/plugins)

include(CMakeFindDependencyMacro)
get_filename_component(_rizin_cmake_path "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)
set(_rz_flag_DEPENDENCY_TARGETS)
foreach(_module_dep ${_rz_flag_DEPENDENCIES})
  if (NOT ${_module_dep}_FOUND)
    find_dependency(${_module_dep} PATHS ${_rizin_cmake_path} NO_DEFAULT_PATH)
  endif()

  if (NOT ${_module_dep}_FOUND)
    set(rz_flag_FOUND False)
    return()
  endif()

  list(APPEND rz_flag_INCLUDE_DIRS "${${_module_dep}_INCLUDE_DIRS}")
  list(APPEND rz_flag_LIBRARIES "${${_module_dep}_LIBRARIES}")
  list(APPEND _rz_flag_DEPENDENCY_TARGETS "${_module_dep}::${_module_dep}")
endforeach()

list(REMOVE_DUPLICATES rz_flag_INCLUDE_DIRS)
list(REMOVE_DUPLICATES rz_flag_LIBRARIES)

if(NOT TARGET rz_flag::rz_flag)
  add_library(rz_flag::rz_flag SHARED IMPORTED)
  target_link_libraries(rz_flag::rz_flag INTERFACE ${_rz_flag_DEPENDENCY_TARGETS})
  set_target_properties(rz_flag::rz_flag PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${rz_flag_INCLUDE_DIRS}")
  set_target_properties(rz_flag::rz_flag PROPERTIES
    IMPORTED_LOCATION "${rz_flag_LIBRARY}")
endif()
set(rz_flag_TARGET rz_flag::rz_flag)
