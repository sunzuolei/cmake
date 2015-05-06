set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/testbin)

LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})

# -----------------------------------------------
# list all subdirectories under "core/"
# -----------------------------------------------
list_subdirectories(LIST_LIB_MODULES "${CMAKE_SOURCE_DIR}/core")
message(STATUS "LIST_LIB_MODULES =  ${LIST_LIB_MODULES}")

# -----------------------------------------------
# step into  subdirectories under "modules/"
# -----------------------------------------------
foreach(dir ${LIST_LIB_MODULES})
  	message(STATUS "A dir is detected: ${dir}")
	add_subdirectory(${dir})
endforeach(dir)

message(STATUS "CMake comes back")
