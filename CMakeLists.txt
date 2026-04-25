cmake_minimum_required(VERSION 4.0.2)
project(Sudoku)

set(CMAKE_CXX_STANDARD 26)

add_executable(Sudoku main.cpp
        src/SudokuBackend.cpp
        src/SudokuBackend.h
        src/frontend.cpp
        src/frontend.h)
