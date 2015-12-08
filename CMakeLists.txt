cmake_minimum_required(VERSION 3.2)
project(SudokuSolver)

include_directories(.)
include_directories("${PROJECT_SOURCE_DIR}/lib")

add_subdirectory(lib)
add_subdirectory(unit_tests)
add_subdirectory(solver)