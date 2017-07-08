#head file path
INCLUDE_DIRECTORIES(. )
#source directory
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/core CORE_CPP_LIST)
list(APPEND CPP_LIST ${CPP_LIST}  ${CORE_CPP_LIST})
message(STATUS "cpplistcore =  ${CPP_LIST}")
set(CPP_LIST ${CPP_LIST} PARENT_SCOPE)
#set extern libraries
#SET(EXT_LIB /usr/lib/x86_64-linux-gnu/libm.so)
SET(EXT_LIB m)
