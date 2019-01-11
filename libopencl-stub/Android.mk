# Android makefile
# Build this using ndk as
# ndk-build NDK_PROJECT_PATH=.  APP_BUILD_SCRIPT=Android.mk
#

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libOpenCL
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include/
LOCAL_SRC_FILES :=  \
  src/libopencl.c \
  src/print_opencl_result.c \
  src/assignMemoryToKernelArgs.c

LOCAL_CFLAGS   = -fPIC -O2
LOCAL_LDLIBS := -llog
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include/

include $(BUILD_SHARED_LIBRARY)

