#include <CL/cl.h>
#include <stdio.h>
#include <stdlib.h>
#include <android/log.h>

#ifndef MY_APP_LOG_TAG
  #define MY_APP_LOG_TAG "OpenCL"
#endif
#ifndef print_logD
  #define print_logD(...) __android_log_print(ANDROID_LOG_DEBUG, MY_APP_LOG_TAG, __VA_ARGS__)
  #define print_logE(...) __android_log_print(ANDROID_LOG_ERROR, MY_APP_LOG_TAG, __VA_ARGS__)
#endif
