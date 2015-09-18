<<<<<<< HEAD
#cmake version
cmake_minimum_required(VERSION 2.6)

#project name
PROJECT(demoA)
#set extern libraries
SET(LIBRARIES /usr/lib/x86_64-linux-gnu/libm.so)
SET(ALL_CODE_LIST demo.cpp sqrt.cpp sqrt.h)
#print the value of variable
MESSAGE(${ALL_CODE_LIST})
#add executable file
ADD_EXECUTABLE(sqrtDemoA ${ALL_CODE_LIST})
MESSAGE(STATUS ${DIR_SRCS})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoA ${LIBRARIES})

set (EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")
=======
#cmake version
cmake_minimum_required(VERSION 2.6)

#project name
PROJECT(demoA)
#set extern libraries
SET(LIBRARIES /usr/lib/x86_64-linux-gnu/libm.so)
SET(ALL_CODE_LIST demo.cpp sqrt.cpp sqrt.h)
#print the value of variable
MESSAGE(${ALL_CODE_LIST})
#add executable file
ADD_EXECUTABLE(sqrtDemoA ${ALL_CODE_LIST})
MESSAGE(STATUS ${DIR_SRCS})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoA ${LIBRARIES})
>>>>>>> 4b8c3bb710aea71918ba2b6c43e595d6c36af2f6
