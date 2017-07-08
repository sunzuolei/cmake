cmake_minimum_required(VERSION 2.8.3)
PROJECT(demoF)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/testbin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

#find_package(Boost REQUIRED COMPONENTS date_time serialization unit_test_framework graph system filesystem regex program_options)
find_package(Boost)
if (Boost_FOUND)
        include_directories(${Boost_INCLUDE_DIRS})
 #set(BOOST_LIBS ${Boost_LIBRARIES})
else(Boost_FOUND)
        message(FATAL_ERROR "The library need boost framefork for unit test, please install it")
endif(Boost_FOUND)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/core/hello/include
                    ${CMAKE_SOURCE_DIR}/core/sqrt/include)


ADD_SUBDIRECTORY(${CMAKE_SOURCE_DIR}/core)
ADD_SUBDIRECTORY(${CMAKE_SOURCE_DIR}/testwithboost)
