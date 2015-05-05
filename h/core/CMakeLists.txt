set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/testbin)
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})

ADD_SUBDIRECTORY(./hello)
ADD_SUBDIRECTORY(./sqrt)
project(all_modules)
# -----------------------------------------------
# list all subdirectories under "modules/"
# -----------------------------------------------
list_subdirectories(LIST_MOLE_MODULES "${CMAKE_SOURCE_DIR}/modules")

# -----------------------------------------------
# step into  subdirectories under "modules/"
# -----------------------------------------------
foreach(dir ${LIST_MOLE_MODULES})
  add_subdirectory(${dir})
endforeach(dir)

