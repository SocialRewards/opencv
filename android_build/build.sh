#!/bin/bash

cmake .. -DCMAKE_TOOLCHAIN_FILE=../platforms/android/android.toolchain.cmake \
    -DBUILD_DOCS=OFF \
    -DANDROID_NDK=${ANDROID_NDK} \
    -DANDROID_NATIVE_API_LEVEL=android-21 \
    -DANDROID_SDK_TARGET=21 \
    -DBUILD_JAVA=OFF \
    -DBUILD_ANDROID_EXAMPLES=OFF \
    -DBUILD_ANDROID_PROJECTS=OFF \
    -DANDROID_STL=c++_shared \
    -DCV_TRACE=OFF \
    -DWITH_IPP=OFF \
    -DCMAKE_TOOLCHAIN_FILE=${ANDROID_NDK}/build/cmake/android.toolchain.cmake \
    -DANDROID_TOOLCHAIN=clang \
    -DANDROID_STL=c++_static \
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_opencv_core=ON \
    -DBUILD_opencv_imgproc=ON \
    -DBUILD_opencv_calib3d=ON \
    -DBUILD_opencv_imgcodecs=OFF \
    -DBUILD_opencv_dnn=OFF \
    -DBUILD_opencv_flann=OFF \
    -DBUILD_opencv_ml=OFF \
    -DBUILD_opencv_objdetect=OFF \
    -DBUILD_opencv_photo=OFF \
    -DBUILD_opencv_stiching=OFF \
    -DBUILD_opencv_videoio=OFF \
    -DBUILD_opencv_highgui=OFF \
    -DCMAKE_INSTALL_PREFIX:PATH=$(pwd)/out \
    -DANDROID_ABI="armeabi-v7a with NEON" \
    -DWITH_CUDA=OFF \
    -DWITH_TBB=OFF \
    -DHAVE_OPENCL=ON \
    -DOPENCL_FOUND=ON \
    -DWITH_OPENCL=ON \
    -DHAVE_OPENCL_STATIC=ON \
    -DOPENCL_LIBRARY=$(pwd)/../libopencl-stub/libOpenCL.so \
    -DOPENCL_INCLUDE_DIRS=$(pwd)/../libopencl-stub/include

cmake -LA
make -j4
make install

