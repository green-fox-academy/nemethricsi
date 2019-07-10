cmake_minimum_required(VERSION 3.14)
project(PostIt)

set(CMAKE_CXX_STANDARD 14)

add_executable(PostIt main.cpp PostItClass.cpp PostItClass.h)