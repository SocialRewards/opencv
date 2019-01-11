#include "libopencl.h"
#include "print_opencl_result.h"

typedef struct {
  void* mapPtr;
  cl_mem memObj;
} clAssignMemory;
