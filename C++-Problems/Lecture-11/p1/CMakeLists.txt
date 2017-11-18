cmake_minimum_required(VERSION 3.8)
project(p1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Artikl.cpp Artikl.h Pantaloni.cpp Pantaloni.h Kosuli.cpp Kosuli.h)
add_executable(p1 ${SOURCE_FILES})