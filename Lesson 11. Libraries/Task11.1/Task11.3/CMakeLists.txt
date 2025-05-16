cmake_minimum_required(VERSION 3.22.0)

project(Task11.3)

add_library(Leaver SHARED Leaver.h Leaver.cpp)
add_executable(Task11.3 Task11.3.cpp)
target_link_libraries(Task11.3 Leaver)