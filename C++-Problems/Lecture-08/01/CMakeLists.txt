cmake_minimum_required(VERSION 3.8)
project(01)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Complex.cpp Complex.h)
add_executable(01 ${SOURCE_FILES})