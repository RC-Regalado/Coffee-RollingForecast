cmake_minimum_required(VERSION 3.22)
project(rolling_forecast)

set(CMAKE_CXX_STANDARD 20)

add_library(rolling_forecast main.cpp 
  objects/batch.cpp
  objects/farm.cpp
  objects/variety.cpp
  maintenance/maintenance.cpp
  maintenance/pruning.cpp
  maintenance/reseeding.cpp
)

target_include_directories(rolling_forecast PUBLIC include)

