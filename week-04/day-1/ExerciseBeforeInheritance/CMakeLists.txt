cmake_minimum_required(VERSION 3.14)
project(ExerciseBeforeInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExerciseBeforeInheritance main.cpp Person.cpp Person.h Student.cpp Student.h Mentor.cpp Mentor.h Sponsor.cpp Sponsor.h)