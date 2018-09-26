cmake_minimum_required(VERSION 3.9)
project(mcomp-rendering)

add_library(mcomp-rendering rendering.c rendering.h)

add_executable(test_mcomp_rendering test/main.c)
target_link_libraries(test_mcomp_rendering mcomp mcomp-rendering)
