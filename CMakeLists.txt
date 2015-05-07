cmake_minimum_required (VERSION 2.6)
project (HaikuScientificCalculator)
set (EXECUTABLE "ScientificCalculator")
include_directories (include/)

file (GLOB SOURCE source/*.cpp)
file (GLOB ACTIONS source/actions/*.cpp)

add_executable (${EXECUTABLE} ${SOURCE} ${ACTIONS})
target_link_libraries (${EXECUTABLE} be)
