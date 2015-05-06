cmake_minimum_required (VERSION 2.6)
project (HaikuScientificCalculator)
include_directories (include/)

file (GLOB SRC source/*.cpp)

add_executable (ScientificCalculator ${SRC})
