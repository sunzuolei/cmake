#cmake version
cmake_minimum_required(VERSION 2.6)

#project name
PROJECT(demo3)
#set extern libraries
SET(LIBRARIES /usr/lib/x86_64-linux-gnu/libm.so)
#SET(ALL_CODE_LIST demo.cpp sqrt.cpp sqrt.h)
#print the value of variable
#MESSAGE(${ALL_CODE_LIST})
MESSAGE(STATUS "This is BINARY dir" ${demo3_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir" ${demo3_SOURCE_DIR})
MESSAGE(STATUS "EXT_lib=" ${LIBRARIES})
#add executable file
ADD_SUBDIRECTORY(./src)
#set CMAKE_INSTALL_PREFIX
SET(CMAKE_INSTALL_PREFIX /home/liqi/workspace/cmake/install_dir)
MESSAGE(STATUS "CMAKE_INSTALL_PREFIX=" ${CMAKE_INSTALL_PREFIX})
#install some files
INSTALL(PROGRAMS runhello.sh DESTINATION bin)
INSTALL(DIRECTORY doc/ DESTINATION doc)
INSTALL(FILES COPYRIGHT README DESTINATION doc)

