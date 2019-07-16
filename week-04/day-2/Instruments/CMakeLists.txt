cmake_minimum_required(VERSION 3.14)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h)