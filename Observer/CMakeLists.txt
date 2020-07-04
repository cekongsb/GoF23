cmake_minimum_required(VERSION 3.13)
project(Observer)

set(CMAKE_CXX_STANDARD 11)

add_executable(Observer main.cpp Subject.h Subject.cpp Observer.h Observer.cpp)