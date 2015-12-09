cmake_minimum_required(VERSION 3.2)
project(SudokuSolver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -Wnon-virtual-dtor -pedantic -Wcast-align -Wunused -Woverloaded-virtual -fno-tree-vectorize")

if(ENABLE_COVERAGE STREQUAL "ON")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
endif()

include_directories(.)
include_directories("${PROJECT_SOURCE_DIR}/lib")

add_subdirectory(lib)
add_subdirectory(unit_tests)
add_subdirectory(solver)