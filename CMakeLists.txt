cmake_minimum_required (VERSION 2.6)
project (HaikuScientificCalculator)
set (EXECUTABLE "ScientificCalculator")
include_directories (include/)

file (GLOB SRC source/*.cpp)

add_executable (${EXECUTABLE} ${SRC})
target_link_libraries (${EXECUTABLE} be)
