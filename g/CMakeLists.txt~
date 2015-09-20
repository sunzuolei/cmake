cmake_minimum_required(VERSION 2.8.3)
project(demoG)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
INCLUDE_DIRECTORIES(../f/core/hello/include ../f/core/sqrt/include)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src CPP_LIST)
LINK_DIRECTORIES(../f/lib)
#list(APPEND CPP_LIST ${CORE_CPP_LIST} ${EXAM_CPP_LIST})
#message(STATUS "cpplistinexample = ${CPP_LIST}")
#add executable file
ADD_EXECUTABLE(demoG ${CPP_LIST})
#add link library
TARGET_LINK_LIBRARIES(demoG hellosqrt)
