#cmake version
cmake_minimum_required(VERSION 2.8.3)
#project name
PROJECT(demo4)
#add subdirectory
ADD_SUBDIRECTORY(library)
#set prefix
SET(CMAKE_INSTALL_PREFIX /home/liqi/workspace/cmake/install_dir)
MESSAGE(STATUS "CMAKE_INSTALL_PREFIX=" ${CMAKE_INSTALL_PREFIX})
