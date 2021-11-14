cmake_minimum_required(VERSION 3.20)
project(lab6and7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab6and7
        mainlab6.cpp
        simple.cpp
        simple.h
        sorting.cpp
        sorting.h)
