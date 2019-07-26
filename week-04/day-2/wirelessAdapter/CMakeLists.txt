cmake_minimum_required(VERSION 3.14)
project(wirelessAdapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(wirelessAdapter main.cpp Device.cpp Device.h USBDevice.cpp USBDevice.h NetworkDevice.cpp NetworkDevice.h WirelessAdapter.cpp WirelessAdapter.h)