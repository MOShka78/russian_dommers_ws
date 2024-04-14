# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(add_two_numbers LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp)
include_directories(include())