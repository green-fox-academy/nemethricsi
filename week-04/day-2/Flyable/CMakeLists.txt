cmake_minimum_required(VERSION 3.14)
project(Flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flyable main.cpp Flyable.cpp Flyable.h Vehicle.cpp Vehicle.h Animal.cpp Animal.h Helicopter.cpp Helicopter.h Bird.cpp Bird.h)