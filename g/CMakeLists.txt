set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/example EXAM_CPP_LIST)
#list(APPEND CPP_LIST ${CORE_CPP_LIST} ${EXAM_CPP_LIST})
#message(STATUS "cpplistinexample = ${CPP_LIST}")
#add executable file
ADD_EXECUTABLE(sqrtDemoE ${EXAM_CPP_LIST})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoE ${EXT_LIB})
