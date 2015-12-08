cmake_minimum_required(VERSION 3.2)

file(GLOB_RECURSE SOURCE_FILES ./*)
add_library(sudoku ${SOURCE_FILES})