cmake_minimum_required(VERSION 3.22)
project(automata)

set(CMAKE_CXX_STANDARD 20)

add_executable(automata main.cpp 
  objects/batch.hpp
  objects/batch.cpp
  objects/farm.hpp
  objects/farm.cpp
  objects/variety.hpp
  objects/variety.cpp
)

