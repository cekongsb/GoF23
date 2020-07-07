cmake_minimum_required(VERSION 3.13)
project(Bridge)

set(CMAKE_CXX_STANDARD 11)

add_executable(Bridge main.cpp Abstraction.h Abstraction.cpp AbstractionImp.h AbstractionImp.cpp)