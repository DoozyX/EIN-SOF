cmake_minimum_required(VERSION 3.8)
project(01)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Datum.cpp Datum.h Zivotno.cpp Zivotno.h Zoo.cpp Zoo.h)
add_executable(01 ${SOURCE_FILES})