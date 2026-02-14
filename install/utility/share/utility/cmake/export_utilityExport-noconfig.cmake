#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "utility::utility_lib" for configuration ""
set_property(TARGET utility::utility_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(utility::utility_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libutility_lib.so"
  IMPORTED_SONAME_NOCONFIG "libutility_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS utility::utility_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_utility::utility_lib "${_IMPORT_PREFIX}/lib/libutility_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
