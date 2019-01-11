#include "assignMemoryToKernelArgs.h"

clAssignMemory* assignMemoryToKernelArgs(cl_context context, cl_command_queue queue, void* ptr, size_t size, cl_kernel kernel, int argIndex) {
  cl_int ret;

  cl_mem memObj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_USE_HOST_PTR, size, ptr, &ret);
  if (ret != CL_SUCCESS) {
    print_opencl_result("clCreateBuffer", ret);
    return NULL;
  }

  void *mapPtr = clEnqueueMapBuffer(queue, memObj, CL_TRUE, CL_MAP_READ | CL_MAP_WRITE, 0, size, 0, NULL, NULL, &ret);
  if (ret != CL_SUCCESS) {
    print_opencl_result("clEnqueueMapBuffer", ret);
    return NULL;
  }

  ret = clSetKernelArg(kernel, argIndex, sizeof(cl_mem), (void*)&memObj);
  if (ret != CL_SUCCESS) {
    print_opencl_result("clSetKernelArg", ret);
    return NULL;
  }
  clAssignMemory *result = (clAssignMemory *)malloc(sizeof(clAssignMemory));
  result->memObj = memObj;
  result->mapPtr = mapPtr;
  return result;
}