#set source variable
SET(LIBHELLO_SRC hello.c)
#add executable
#ADD_EXECUTABLE(demo4 hello.h hello.cpp)
#set output path
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#add library---
ADD_LIBRARY(hello SHARED ${LIBHELLO_SRC})
ADD_LIBRARY(hello_static STATIC ${LIBHELLO_SRC})
#change static library property
SET_TARGET_PROPERTIES(hello_static PROPERTIES OUTPUT_NAME "hello")
#change CLEAN_DIRECT_OUPUT properties
SET_TARGET_PROPERTIES(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)
SET_TARGET_PROPERTIES(hello_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#add shared library version number
SET_TARGET_PROPERTIES(hello PROPERTIES VERSION 1.2 SOVERSION 1)
#install libraries
INSTALL(TARGETS hello hello_static 
	LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)
#install include file
INSTALL(FILES hello.h DESTINATION include)
