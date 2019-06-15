cmake_minimum_required(VERSION 3.14)
project(nico_introduccion_a_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(nico_introduccion_a_c main.c restaurant.c restaurant.h saraza.c saraza.h)
