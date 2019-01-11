#include "print_opencl_result.h"

void print_opencl_result(const char *name, int ret) {
  if (ret == CL_SUCCESS) {
      print_logD("--->%s = success", name);
  } else if (ret == CL_DEVICE_NOT_FOUND) {
      print_logE("--->%s = CL_DEVICE_NOT_FOUND", name);
  } else if (ret == CL_DEVICE_NOT_AVAILABLE) {
      print_logE("--->%s = CL_DEVICE_NOT_AVAILABLE", name);
  } else if (ret == CL_COMPILER_NOT_AVAILABLE) {
      print_logE("--->%s = CL_COMPILER_NOT_AVAILABLE", name);
  } else if (ret == CL_MEM_OBJECT_ALLOCATION_FAILURE) {
      print_logE("--->%s = CL_MEM_OBJECT_ALLOCATION_FAILURE", name);
  } else if (ret == CL_OUT_OF_RESOURCES) {
      print_logE("--->%s = CL_OUT_OF_RESOURCES", name);
  } else if (ret == CL_OUT_OF_HOST_MEMORY) {
      print_logE("--->%s = CL_OUT_OF_HOST_MEMORY", name);
  } else if (ret == CL_PROFILING_INFO_NOT_AVAILABLE) {
      print_logE("--->%s = CL_PROFILING_INFO_NOT_AVAILABLE", name);
  } else if (ret == CL_MEM_COPY_OVERLAP) {
      print_logE("--->%s = CL_MEM_COPY_OVERLAP", name);
  } else if (ret == CL_IMAGE_FORMAT_MISMATCH) {
      print_logE("--->%s = CL_IMAGE_FORMAT_MISMATCH", name);
  } else if (ret == CL_IMAGE_FORMAT_NOT_SUPPORTED) {
      print_logE("--->%s = CL_IMAGE_FORMAT_NOT_SUPPORTED", name);
  } else if (ret == CL_BUILD_PROGRAM_FAILURE) {
      print_logE("--->%s = CL_BUILD_PROGRAM_FAILURE", name);
  } else if (ret == CL_MAP_FAILURE) {
      print_logE("--->%s = CL_MAP_FAILURE", name);
  } else if (ret == CL_MISALIGNED_SUB_BUFFER_OFFSET) {
      print_logE("--->%s = CL_MISALIGNED_SUB_BUFFER_OFFSET", name);
  } else if (ret == CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST) {
      print_logE("--->%s = CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST", name);
  } else if (ret == CL_INVALID_VALUE) {
      print_logE("--->%s = CL_INVALID_VALUE", name);
  } else if (ret == CL_INVALID_DEVICE_TYPE) {
      print_logE("--->%s = CL_INVALID_DEVICE_TYPE", name);
  } else if (ret == CL_INVALID_PLATFORM) {
      print_logE("--->%s = CL_INVALID_PLATFORM", name);
  } else if (ret == CL_INVALID_DEVICE) {
      print_logE("--->%s = CL_INVALID_DEVICE", name);
  } else if (ret == CL_INVALID_CONTEXT) {
      print_logE("--->%s = CL_INVALID_CONTEXT", name);
  } else if (ret == CL_INVALID_QUEUE_PROPERTIES) {
      print_logE("--->%s = CL_INVALID_QUEUE_PROPERTIES", name);
  } else if (ret == CL_INVALID_COMMAND_QUEUE) {
      print_logE("--->%s = CL_INVALID_COMMAND_QUEUE", name);
  } else if (ret == CL_INVALID_HOST_PTR) {
      print_logE("--->%s = CL_INVALID_HOST_PTR", name);
  } else if (ret == CL_INVALID_MEM_OBJECT) {
      print_logE("--->%s = CL_INVALID_MEM_OBJECT", name);
  } else if (ret == CL_INVALID_IMAGE_FORMAT_DESCRIPTOR) {
      print_logE("--->%s = CL_INVALID_IMAGE_FORMAT_DESCRIPTOR", name);
  } else if (ret == CL_INVALID_IMAGE_SIZE) {
      print_logE("--->%s = CL_INVALID_IMAGE_SIZE", name);
  } else if (ret == CL_INVALID_SAMPLER) {
      print_logE("--->%s = CL_INVALID_SAMPLER", name);
  } else if (ret == CL_INVALID_BINARY) {
      print_logE("--->%s = CL_INVALID_BINARY", name);
  } else if (ret == CL_INVALID_BUILD_OPTIONS) {
      print_logE("--->%s = CL_INVALID_BUILD_OPTIONS", name);
  } else if (ret == CL_INVALID_PROGRAM) {
      print_logE("--->%s = CL_INVALID_PROGRAM", name);
  } else if (ret == CL_INVALID_PROGRAM_EXECUTABLE) {
      print_logE("--->%s = CL_INVALID_PROGRAM_EXECUTABLE", name);
  } else if (ret == CL_INVALID_KERNEL_NAME) {
      print_logE("--->%s = CL_INVALID_KERNEL_NAME", name);
  } else if (ret == CL_INVALID_KERNEL_DEFINITION) {
      print_logE("--->%s = CL_INVALID_KERNEL_DEFINITION", name);
  } else if (ret == CL_INVALID_KERNEL) {
      print_logE("--->%s = CL_INVALID_KERNEL", name);
  } else if (ret == CL_INVALID_ARG_INDEX) {
      print_logE("--->%s = CL_INVALID_ARG_INDEX", name);
  } else if (ret == CL_INVALID_ARG_VALUE) {
      print_logE("--->%s = CL_INVALID_ARG_VALUE", name);
  } else if (ret == CL_INVALID_ARG_SIZE) {
      print_logE("--->%s = CL_INVALID_ARG_SIZE", name);
  } else if (ret == CL_INVALID_KERNEL_ARGS) {
      print_logE("--->%s = CL_INVALID_KERNEL_ARGS", name);
  } else if (ret == CL_INVALID_WORK_DIMENSION) {
      print_logE("--->%s = CL_INVALID_WORK_DIMENSION", name);
  } else if (ret == CL_INVALID_WORK_GROUP_SIZE) {
      print_logE("--->%s = CL_INVALID_WORK_GROUP_SIZE", name);
  } else if (ret == CL_INVALID_WORK_ITEM_SIZE) {
      print_logE("--->%s = CL_INVALID_WORK_ITEM_SIZE", name);
  } else if (ret == CL_INVALID_GLOBAL_OFFSET) {
      print_logE("--->%s = CL_INVALID_GLOBAL_OFFSET", name);
  } else if (ret == CL_INVALID_EVENT_WAIT_LIST) {
      print_logE("--->%s = CL_INVALID_EVENT_WAIT_LIST", name);
  } else if (ret == CL_INVALID_EVENT) {
      print_logE("--->%s = CL_INVALID_EVENT", name);
  } else if (ret == CL_INVALID_OPERATION) {
      print_logE("--->%s = CL_INVALID_OPERATION", name);
  } else if (ret == CL_INVALID_GL_OBJECT) {
      print_logE("--->%s = CL_INVALID_GL_OBJECT", name);
  } else if (ret == CL_INVALID_BUFFER_SIZE) {
      print_logE("--->%s = CL_INVALID_BUFFER_SIZE", name);
  } else if (ret == CL_INVALID_MIP_LEVEL) {
      print_logE("--->%s = CL_INVALID_MIP_LEVEL", name);
  } else if (ret == CL_INVALID_GLOBAL_WORK_SIZE) {
      print_logE("--->%s = CL_INVALID_GLOBAL_WORK_SIZE", name);
  } else if (ret == CL_INVALID_PROPERTY) {
      print_logE("--->%s = CL_INVALID_PROPERTY", name);
  } else {
      print_logE("--->%s is failed", name);
  }
}