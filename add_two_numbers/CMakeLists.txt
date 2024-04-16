# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(add_two_numbers LANGUAGES CXX)

set(ADD_TWO_TEST_CPP
    test/main.cpp
)

add_library(${PROJECT_NAME} src/add_two_numbers.cpp)
include_directories(include)




enable_testing()
add_executable(${PROJECT_NAME}_test ${ADD_TWO_TEST_CPP})
target_link_libraries(${PROJECT_NAME}_test gtest ${PROJECT_NAME} )
add_test(
  NAME ${PROJECT_NAME}_test
  COMMAND $<TARGET_FILE:${PROJECT_NAME}_test>
)