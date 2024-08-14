cmake_minimum_required(VERSION 3.5)
project(two_sum LANGUAGES CXX)

add_library(${PROJECT_NAME} src/two_sum.cpp)
include_directories(include)

enable_testing()
add_executable(${PROJECT_NAME}_test test/main.cpp)
target_link_libraries(${PROJECT_NAME}_test gtest ${PROJECT_NAME} )
add_test(
  NAME ${PROJECT_NAME}_test
  COMMAND $<TARGET_FILE:${PROJECT_NAME}_test>
)