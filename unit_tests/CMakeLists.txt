cmake_minimum_required(VERSION 3.2)

file(GLOB_RECURSE SOURCE_FILES *)
add_executable(unit_tests ${SOURCE_FILES})

target_link_libraries(unit_tests sudoku)
target_link_libraries(unit_tests gtest)
