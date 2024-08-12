cmake_minimum_required(VERSION 3.5)
project(russian_doomers)

set(CMAKE_CXX_STANDARD 17)


if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(add_two_numbers)
add_subdirectory(two_sum)
add_subdirectory(long_substr)
add_subdirectory(long_palindromic)
add_subdirectory(median_two_sort)
add_subdirectory(string_to_integer)
add_subdirectory(reverse_int)



