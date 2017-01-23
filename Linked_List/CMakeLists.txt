cmake_minimum_required(VERSION 3.6)
project(single_linked_list)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h List.h)
add_executable(single_linked_list ${SOURCE_FILES})