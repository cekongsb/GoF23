cmake_minimum_required(VERSION 3.13)
project(Factory)

set(CMAKE_CXX_STANDARD 11)

add_executable(Factory main.cpp Product.h Product.cpp Factory.h Factory.cpp)