message(STATUS "CMake has been in 'sqrt'")

include_directories(./include)
#aux_source_directory(./src LIB_CPP)
add_library(sqrt SHARED src/sqrt.cpp)

