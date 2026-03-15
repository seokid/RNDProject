cmake_minimum_required(VERSION 3.14)
project(ContourTracing VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ContourTracing
    src/main.cpp
    src/MarchingSquares.cpp
)

target_include_directories(ContourTracing PRIVATE src)
