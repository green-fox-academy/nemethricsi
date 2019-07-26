cmake_minimum_required(VERSION 3.14)
project(AircraftCarrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(AircraftCarrier main.cpp Carrier.cpp Carrier.h Aircraft.cpp Aircraft.h F16.cpp F16.h F35.cpp F35.h)