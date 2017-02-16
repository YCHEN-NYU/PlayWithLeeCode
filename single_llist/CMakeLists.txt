cmake_minimum_required(VERSION 3.6)
project(single_llist)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h List.cpp List.h)
add_executable(single_llist ${SOURCE_FILES})