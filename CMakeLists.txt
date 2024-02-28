cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_lab_1_1 main.cpp
        IntPower.cpp
        IntPower.h
        Google_tests/test.cpp
        Google_tests/test.cpp)

add_subdirectory(Google_tests)