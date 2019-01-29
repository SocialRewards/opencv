#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "opencv_core" for configuration "Release"
set_property(TARGET opencv_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_core PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_core.so"
  IMPORTED_SONAME_RELEASE "libopencv_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_core "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_core.so" )

# Import target "opencv_flann" for configuration "Release"
set_property(TARGET opencv_flann APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_flann PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_flann.so"
  IMPORTED_SONAME_RELEASE "libopencv_flann.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_flann )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_flann "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_flann.so" )

# Import target "opencv_imgproc" for configuration "Release"
set_property(TARGET opencv_imgproc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_imgproc PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_imgproc.so"
  IMPORTED_SONAME_RELEASE "libopencv_imgproc.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_imgproc )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_imgproc "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_imgproc.so" )

# Import target "opencv_features2d" for configuration "Release"
set_property(TARGET opencv_features2d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_features2d PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_features2d.so"
  IMPORTED_SONAME_RELEASE "libopencv_features2d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_features2d )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_features2d "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_features2d.so" )

# Import target "opencv_calib3d" for configuration "Release"
set_property(TARGET opencv_calib3d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_calib3d PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_calib3d.so"
  IMPORTED_SONAME_RELEASE "libopencv_calib3d.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_calib3d )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_calib3d "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_calib3d.so" )

# Import target "opencv_objdetect" for configuration "Release"
set_property(TARGET opencv_objdetect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_objdetect PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_objdetect.so"
  IMPORTED_SONAME_RELEASE "libopencv_objdetect.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_objdetect )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_objdetect "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_objdetect.so" )

# Import target "opencv_stitching" for configuration "Release"
set_property(TARGET opencv_stitching APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_stitching PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_stitching.so"
  IMPORTED_SONAME_RELEASE "libopencv_stitching.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_stitching )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_stitching "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_stitching.so" )

# Import target "opencv_video" for configuration "Release"
set_property(TARGET opencv_video APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opencv_video PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_video.so"
  IMPORTED_SONAME_RELEASE "libopencv_video.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_video )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_video "${_IMPORT_PREFIX}/sdk/native/libs/armeabi-v7a/libopencv_video.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
