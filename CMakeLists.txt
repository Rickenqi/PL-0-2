cmake_minimum_required(VERSION 3.16)
project(PL_0_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PL_0_2
        src/file-process.cpp
        Readme.md src/main.cpp src/variables.h)
