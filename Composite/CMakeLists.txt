cmake_minimum_required(VERSION 3.13)
project(Composite)

set(CMAKE_CXX_STANDARD 11)

add_executable(Composite main.cpp Component.h Component.cpp Composite.h Composite.cpp Leaf.h Leaf.cpp)