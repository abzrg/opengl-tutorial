cmake_minimum_required(VERSION 3.25)

project(
    OpenGL-Tutorial
    DESCRIPTION "OpenGL Tutorial"
    LANGUAGES CXX
    VERSION 0.1.0
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Dependencies
add_subdirectory(external)

# Application
add_subdirectory(src)
