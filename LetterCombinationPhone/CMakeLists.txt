cmake_minimum_required(VERSION 3.22.1)
set(CXX_STANDARD 23)

project(LetterCombos)
add_executable(LetterCombos main.cpp)
target_compile_options(LetterCombos PRIVATE -g)