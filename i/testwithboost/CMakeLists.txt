#INCLUDE_DIRECTORIES(./hello/include ./sqrt/include)
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})
ADD_EXECUTABLE(testHelloSqrtWithBoost testHelloSqrtWithBoost.cpp)
TARGET_LINK_LIBRARIES(testHelloSqrtWithBoost hellosqrt ${Boost_LIBRARIES})
