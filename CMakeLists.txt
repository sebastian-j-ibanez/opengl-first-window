cmake_minimum_required(VERSION 3.30)
project(first-window)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(first-project main.c)
target_link_libraries(first-project PRIVATE OpenGL::GL glfw GLEW)
