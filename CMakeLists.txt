cmake_minimum_required(VERSION 3.15)
project(PyGraph)

set(CMAKE_CXX_STANDARD 14)

add_executable(PyGraph main.cpp display/menu.cpp display/menu.h Constants.h display/inputHandler.cpp display/inputHandler.h)