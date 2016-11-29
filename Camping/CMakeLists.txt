cmake_minimum_required(VERSION 3.6)
project(Camping)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es1.c)
add_executable(Camping1 ${SOURCE_FILES})

set(SOURCE_FILES es2.c)
add_executable(Camping2 ${SOURCE_FILES})

set(SOURCE_FILES es3.c)
add_executable(Camping3 ${SOURCE_FILES})