cmake_minimum_required(VERSION 3.8)
project(ClionUnitTest)

#
add_subdirectory(lib/googletest-1.8.0)
include_directories(lib/googletest-1.8.0/googletest/include)
include_directories(lib/googletest-1.8.0/googlemock/include)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES StringAlgorithmTest.cpp ../Src/Source/StringAlgorithm.cpp ../Src/Include/StringAlgorithm.hpp)
add_executable(ClionUnitTest ${SOURCE_FILES})
target_link_libraries(ClionUnitTest gtest gtest_main gmock)