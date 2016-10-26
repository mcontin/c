cmake_minimum_required(VERSION 3.6)
project(esercizi_26_10_16)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 es1)
set(SOURCE_FILES es1.c)
add_executable(${BUILD_1} ${SOURCE_FILES})

set(BUILD_2 es2)
set(SOURCE_FILES es2.c)
add_executable(${BUILD_2} ${SOURCE_FILES})

set(BUILD_3 es3)
set(SOURCE_FILES es3.c)
add_executable(${BUILD_3} ${SOURCE_FILES})

set(BUILD_4 es4)
set(SOURCE_FILES es4.c)
add_executable(${BUILD_4} ${SOURCE_FILES})

set(BUILD_5 es5)
set(SOURCE_FILES es5.c)
add_executable(${BUILD_5} ${SOURCE_FILES})

set(BUILD_6 es6)
set(SOURCE_FILES es6.c)
add_executable(${BUILD_6} ${SOURCE_FILES})

set(BUILD_7 es7)
set(SOURCE_FILES es7.c)
add_executable(${BUILD_7} ${SOURCE_FILES})

set(BUILD_8 es8)
set(SOURCE_FILES es8.c)
add_executable(${BUILD_8} ${SOURCE_FILES})

set(BUILD_9 es9)
set(SOURCE_FILES es9.c)
add_executable(${BUILD_9} ${SOURCE_FILES})
