cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH /usr/local)

set(EXECUTABLES "draw;line_in_the_middle;colored_box;diagonals;to_the_center;horizontal_lines;centered_square;four_rectangles;square_positioning;centered_boxes;rainbow_box;purple_steps;purple_steps_3d")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)
