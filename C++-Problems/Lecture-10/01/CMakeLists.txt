cmake_minimum_required(VERSION 3.8)
project(01)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Vraboten.cpp Vraboten.h Profesor.cpp Profesor.h Asistent.cpp Asistent.h Demonstrator.cpp Demonstrator.h)
add_executable(01 ${SOURCE_FILES})