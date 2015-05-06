message(STATUS "CMake has been in 'test'")


include_directories(.)
#aux_source_directory(./src LIB_CPP)
link_directories(${LIBRARY_OUTPUT_PATH})
add_executable(testLibDemo testHelloSqrt.cpp)
target_link_libraries(testLibDemo hello sqrt)

