cmake_minimum_required(VERSION 3.5)
project(long_substr LANGUAGES CXX)

set(LONG_SUBSTR_TEST_CPP
    test/main.cpp
)

add_library(${PROJECT_NAME} src/long_substr.cpp)
include_directories(include)

enable_testing()
add_executable(${PROJECT_NAME}_test ${LONG_SUBSTR_TEST_CPP})
target_link_libraries(${PROJECT_NAME}_test gtest ${PROJECT_NAME} )
add_test(
  NAME ${PROJECT_NAME}_test
  COMMAND $<TARGET_FILE:${PROJECT_NAME}_test>
)