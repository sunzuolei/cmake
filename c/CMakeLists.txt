#cmake version
cmake_minimum_required(VERSION 2.8)
#project name
PROJECT(demoC)
set(CPP_LIST ${})
message(STATUS ${CPP_LIST})
ADD_SUBDIRECTORY(./core)
message(STATUS "cpplistaftercore = ${CPP_LIST}")
ADD_SUBDIRECTORY(./example)
message(STATUS ${EXAM_CPP_LIST})
message(STATUS ${CMAKE_BINARY_DIR})
message(STATUS ${PROJECT_BINARY_DIR})
message(STATUS ${PROJECT_SOURCE_DIR})
