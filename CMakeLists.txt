cmake_minimum_required(VERSION 3.22)
project(automata)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
