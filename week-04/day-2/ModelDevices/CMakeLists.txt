cmake_minimum_required(VERSION 3.14)
project(ModelDevices)

set(CMAKE_CXX_STANDARD 14)

add_executable(ModelDevices main.cpp Printer.cpp Printer.h Scanner.cpp Scanner.h Printer2D.cpp Printer2D.h Printer3D.cpp Printer3D.h Copier.cpp Copier.h)