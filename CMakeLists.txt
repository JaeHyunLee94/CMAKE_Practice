cmake_minimum_required(VERSION 3.22)
project(CMAKE_Practice)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(${CMAKE_SOURCE_DIR}/external)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_subdirectory(${CMAKE_SOURCE_DIR}/src)


