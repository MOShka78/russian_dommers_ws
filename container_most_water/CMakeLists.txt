cmake_minimum_required(VERSION 3.5)
project(container_most_water LANGUAGES CXX)

add_library(${PROJECT_NAME} src/container_most_water.cpp)
include_directories(include)

enable_testing()
add_executable(${PROJECT_NAME}_test test/main.cpp)
target_link_libraries(${PROJECT_NAME}_test gtest ${PROJECT_NAME} )
add_test(
  NAME ${PROJECT_NAME}_test
  COMMAND $<TARGET_FILE:${PROJECT_NAME}_test>
)