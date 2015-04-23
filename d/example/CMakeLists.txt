AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/example EXAM_CPP_LIST)
list(APPEND CPP_LIST ${CORE_CPP_LIST} ${EXAM_CPP_LIST})
message(STATUS "cpplistinexample = ${CPP_LIST}")
#add executable file
ADD_EXECUTABLE(sqrtDemoD ${CPP_LIST})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoD ${EXT_LIB})
