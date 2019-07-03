cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH /usr/local)

set(EXECUTABLES "draw;line_in_the_middle")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)
