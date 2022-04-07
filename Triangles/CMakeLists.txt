cmake_minimum_required(VERSION 3.20)
project(Triangles)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.h" "main.h")
add_executable(Triangles ${SOURCES} "main.cpp")