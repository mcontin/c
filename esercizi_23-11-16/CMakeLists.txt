cmake_minimum_required(VERSION 3.6)
project(esercizi_23_11_16)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 es1)
set(SOURCE_FILES es1.c)
add_executable(${BUILD_1} ${SOURCE_FILES})
#
set(BUILD_2 es2)
set(SOURCE_FILES es2.c)
add_executable(${BUILD_2} ${SOURCE_FILES})
#
set(BUILD_3 es3)
set(SOURCE_FILES es3.c)
add_executable(${BUILD_3} ${SOURCE_FILES})
#
set(BUILD_4 es4)
set(SOURCE_FILES es4.c)
add_executable(${BUILD_4} ${SOURCE_FILES})
#
set(BUILD_5 es5)
set(SOURCE_FILES es5.c)
add_executable(${BUILD_5} ${SOURCE_FILES})

#
set(BUILD_6 es6)
set(SOURCE_FILES es6.c)
add_executable(${BUILD_6} ${SOURCE_FILES})
