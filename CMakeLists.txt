cmake_minimum_required(VERSION 3.3)
project(automata)
set(CMAKE_C_FLAGS "-Wall -pedantic -std=c11 -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c automata.c automata.h)
add_executable(automata ${SOURCE_FILES})