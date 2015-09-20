message(STATUS "CMake has been in 'hello'")


include_directories(./include)
#aux_source_directory(./src LIB_CPP)
add_library(hello SHARED src/sayHello.cpp)

