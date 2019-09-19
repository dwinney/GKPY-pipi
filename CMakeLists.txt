cmake_minimum_required (VERSION 2.9)

project (pipi)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

include_directories("include")
include_directories("src")
include_directories("executables")

add_executable(print_PW
executables/print_PW.cpp
src/pipi.cpp
src/omnes.cpp
src/gauleg.cpp
)
