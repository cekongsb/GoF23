cmake_minimum_required(VERSION 3.13)
project(ThreadPool)

set(CMAKE_CXX_STANDARD 11)

add_executable(ThreadPool main.cpp SafeQueue.h ThreadPool.h)