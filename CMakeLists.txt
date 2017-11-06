cmake_minimum_required(VERSION 3.8)
project(ClionRun)

set(CMAKE_CXX_STANDARD 11)

include_directories(Src/Include)
add_subdirectory(Src)
add_subdirectory(Tests)

set(SOURCE_FILES main.cpp Src/Source/StringAlgorithm.cpp Src/Include/StringAlgorithm.hpp Src/Source/NormalSort.cpp Src/Include/NormalSort.hpp)
add_executable(ClionRun ${SOURCE_FILES})

#target_link_libraries(ClionRun gtest gtest_main gmock)
