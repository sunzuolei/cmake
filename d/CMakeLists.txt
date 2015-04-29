#cmake version
cmake_minimum_required(VERSION 2.8)
#project name
PROJECT(demoD)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
ADD_SUBDIRECTORY(./core)
message(STATUS "corecpplistaftercore = ${CORE_CPP_LIST}")
ADD_SUBDIRECTORY(./example)

message(STATUS "exam_cpp_list = ${EXAM_CPP_LIST}")
message(STATUS "project_binary_dir = ${PROJECT_BINARY_DIR}")
message(STATUS "project_source_dir = ${PROJECT_SOURCE_DIR}")
message(STATUS "cmake_source_dir = ${CMAKE_SOURCE_DIR}")
message(STATUS "cmake_binary_dir = ${CMAKE_BINARY_DIR}")
