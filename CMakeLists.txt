cmake_minimum_required(VERSION 3.0.2)
project(libember_all)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE   ON)

add_subdirectory(libember)
add_subdirectory(libformula)
add_subdirectory(libs101)
add_subdirectory(tinyember)
