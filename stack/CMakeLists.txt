cmake_minimum_required(VERSION 3.6)
project(stack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp llist.cpp llist.h node.h)
add_executable(stack ${SOURCE_FILES})