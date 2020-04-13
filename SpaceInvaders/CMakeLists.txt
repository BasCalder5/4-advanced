cmake_minimum_required(VERSION 3.15)
project(SpaceInvaders)

set(CMAKE_MODULE_PATH  ${PROJECT_SOURCE_DIR/cmake})

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.cpp src/Game.cpp src/Game.h)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY} -lmingw32 -lSDL2main -lSDL2 -lSDL2_image )