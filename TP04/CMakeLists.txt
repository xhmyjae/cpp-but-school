cmake_minimum_required(VERSION 3.20)
project(TP04)

set(CMAKE_CXX_STANDARD 23)
include_directories(include)
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "include/*.h" "utils/*.cpp" "utils/*.h")
add_executable(TP2 ${SOURCES} "main.cpp")