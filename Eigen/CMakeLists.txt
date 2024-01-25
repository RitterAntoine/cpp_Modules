cmake_minimum_required(VERSION 3.28.1)

project(Eigen_tests)

# Set the path to the Eigen headers
set(Eigen3_INCLUDE_DIR "src/ext/eigen-3.4.0")

# This line is not needed if Eigen is installed system-wide
include_directories(${Eigen3_INCLUDE_DIR})

add_executable(eigen_test src/eigen_test.cpp)