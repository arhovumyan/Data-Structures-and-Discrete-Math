cmake_minimum_required(VERSION 3.30)
project(DS_assignment_4)

set(CMAKE_CXX_STANDARD 20)

add_library(DS_assignment_4 Animal.cpp Elephant.cpp Lion.cpp Penguin.cpp Monkey.cpp Zoo.cpp
        main.cpp)