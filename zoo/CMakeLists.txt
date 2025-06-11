cmake_minimum_required(VERSION 3.30)
project(zoo)

set(CMAKE_CXX_STANDARD 20)

add_executable(zoo main.cpp
        zoo.cpp
        Lion.cpp
        Lion.h
        Elephant.cpp
        Elephant.h
        Monkey.cpp
        Monkey.h
        Penguin.cpp
        Penguin.h)
