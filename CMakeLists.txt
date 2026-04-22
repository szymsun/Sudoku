cmake_minimum_required(VERSION 4.1)
project(Sudoku)

set(CMAKE_CXX_STANDARD 26)

add_executable(Sudoku main.cpp
        SudokuBackend.cpp
        frontend.cpp)
