cmake_minimum_required(VERSION 3.17)
project(game_project)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(src/cube)
include_directories(src/opengl_util)

add_library(cube src/cube/Cube.cpp)
add_library(opglu src/opengl_util/Opengl_Utils.cpp)

add_executable(game_project main.cpp)

target_link_libraries(game_project cube)
target_link_libraries(game_project opglu)
target_link_libraries(game_project -lglut -lGL -lGLU)