cmake_minimum_required(VERSION 3.8)
project(02)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Oblik.cpp Oblik.h DvoDomenzionalni.cpp DvoDomenzionalni.h TroDimenzionalni.cpp TroDimenzionalni.h Pravoagolnik.cpp Pravoagolnik.h Kvadar.cpp Kvadar.h)
add_executable(02 ${SOURCE_FILES})