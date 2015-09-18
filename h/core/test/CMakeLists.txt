message(STATUS "CMake has been in 'test'")


include_directories(.)
#aux_source_directory(./src LIB_CPP)
link_directories(${LIBRARY_OUTPUT_PATH})
add_executable(testLibDemo testHelloSqrt.cpp)
target_link_libraries(testLibDemo hello sqrt)

<<<<<<< HEAD
set (EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin" )
=======
>>>>>>> 4b8c3bb710aea71918ba2b6c43e595d6c36af2f6
