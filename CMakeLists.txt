# @file CMakeLists.txt
# 
# CMake files for Memoes
cmake_minimum_required(VERSION 3.18)

# project info
project(Memoes)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Test program is all we have now
add_executable(MemoesTest MemoesTest.cpp Memoes.cpp)

# Run test program
add_custom_target(test COMMENT "Test Memoes"
                       COMMAND $<TARGET_FILE:MemoesTest>
                       DEPENDS MemoesTest)
