<<<<<<< HEAD
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/example EXAM_CPP_LIST)
list(APPEND CPP_LIST ${CPP_LIST} ${EXAM_CPP_LIST})
message(STATUS "cpplistexample =  ${CPP_LIST}")
#add executable file
ADD_EXECUTABLE(sqrtDemoC ${CPP_LIST})
set (EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoC ${EXT_LIB})
=======
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/example EXAM_CPP_LIST)
list(APPEND CPP_LIST ${CPP_LIST} ${EXAM_CPP_LIST})
message(STATUS "cpplistexample =  ${CPP_LIST}")
#add executable file
ADD_EXECUTABLE(sqrtDemoC ${CPP_LIST})
#add link library
TARGET_LINK_LIBRARIES(sqrtDemoC ${EXT_LIB})
>>>>>>> 4b8c3bb710aea71918ba2b6c43e595d6c36af2f6
