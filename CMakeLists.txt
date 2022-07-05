cmake_minimum_required(VERSION 3.22)
project(Breakout)

set(CMAKE_CXX_STANDARD 23)

add_executable(Breakout main.cpp Paddle.cpp Paddle.h Brick.cpp Brick.h Ball.cpp Ball.h)
target_link_libraries(Breakout SDL2 SDL2_ttf)
