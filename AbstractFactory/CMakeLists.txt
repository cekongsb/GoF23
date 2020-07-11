cmake_minimum_required(VERSION 3.13)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 11)

add_executable(AbstractFactory main.cpp Product.h Product.cpp AbstractFactory.h AbstractFactory.cpp)