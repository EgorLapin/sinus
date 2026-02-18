cmake_minimum_required(VERSION 3.10)
project(sin_array)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(USE_DOUBLE "Use double precision" OFF)

add_executable(sin_array main.cpp)

if(USE_DOUBLE)
    target_compile_definitions(sin_array PRIVATE USE_DOUBLE)
endif()
