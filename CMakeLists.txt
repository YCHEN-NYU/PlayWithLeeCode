cmake_minimum_required(VERSION 3.6)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    bankSystem/bankSystem.xcodeproj/project.xcworkspace/xcuserdata/yiyi.xcuserdatad/UserInterfaceState.xcuserstate
    bankSystem/bankSystem.xcodeproj/xcuserdata/yiyi.xcuserdatad/xcdebugger/Breakpoints_v2.xcbkptlist MergeSort/vect_swap.cpp)

add_executable(leetcode ${SOURCE_FILES})