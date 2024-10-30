# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.15)

# Set the project name and language
project(StudentIterator LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-O3)

# Add an executable target
add_executable(students_iterator main.cpp)

# mkdir build
# cd build
# cmake ..
# cmake --build .