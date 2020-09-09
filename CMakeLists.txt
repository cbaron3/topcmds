cmake_minimum_required(VERSION 3.7)

project(topcmds)

add_executable(topcmds "src/main.cpp")

target_include_directories(topcmds PRIVATE ${CMAKE_SOURCE_DIR})