cmake_minimum_required(VERSION 3.20)
project(TP02)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.h" "utils/*.cpp" "utils/*.h")
add_executable(TP2 ${SOURCES} "main.cpp")