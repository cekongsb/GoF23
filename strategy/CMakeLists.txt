cmake_minimum_required(VERSION 3.13)
project(strategy)

set(CMAKE_CXX_STANDARD 11)

add_executable(strategy main.cpp strategy.h strategy.cpp context.h context.cpp)