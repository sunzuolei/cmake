#cmake version
cmake_minimum_required(VERSION 2.6)

IF(WIN32)
	MESSAGE(FATAL_ERROR “Windows is stupid.”)
ELSEIF(UNIX)
	MESSAGE(STATUS “This is Linux.”)
ENDIF(WIN32)

#project name
PROJECT(demoB)
#head file path
INCLUDE_DIRECTORIES(./include)
#source directory
AUX_SOURCE_DIRECTORY(src CPP_FILES)
#print the direcories
MESSAGE(STATUS "CPP_FILES: " ${CPP_FILES})
MESSAGE(STATUS "Binary dir: " ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "Source dir: " ${PROJECT_SOURCE_DIR})
MESSAGE(STATUS ${DIR_SRCS})
#set extern libraries
#SET(LIBRARIES /usr/lib/x86_64-linux-gnu/libm.so)
#add executable file
ADD_EXECUTABLE(sqrtDemoB ${CPP_FILES})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoB m)
