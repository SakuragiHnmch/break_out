cmake_minimum_required(VERSION 3.17)
project(break_out)

set(CMAKE_CXX_STANDARD 11)

# 3rd library
add_subdirectory(3rd)

add_subdirectory(game)

add_subdirectory(utility)

add_subdirectory(program)