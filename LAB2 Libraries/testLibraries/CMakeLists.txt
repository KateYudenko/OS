cmake_minimum_required(VERSION 3.22)
project(testLibraries)

set(CMAKE_CXX_STANDARD 17)

include_directories(../Number)
include_directories(../Vector)

file(GLOB num_lib "../Number/cmake-build-debug/libNumber.a")
file(GLOB vec_lib "../Vector/cmake-build-debug/libVector.so")

add_executable(TestLibraries main.cpp ${num_lib} ${vec_lib})
target_link_libraries(TestLibraries ${num_lib} ${vec_lib})