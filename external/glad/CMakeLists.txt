cmake_minimum_required(VERSION 3.25.0)
project(
  Glad
  DESCRIPTION "OpenGL Loader-Generator based on the official specs"
  LANGUAGES C
)

add_library(glad ./src/glad.c)
target_include_directories(glad PUBLIC include/)
