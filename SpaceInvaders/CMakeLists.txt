cmake_minimum_required(VERSION 3.15)
project(SpaceInvaders)

set(CMAKE_MODULE_PATH  ${PROJECT_SOURCE_DIR/cmake})

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.cpp src/Game.cpp src/Game.h src/AFactory.cpp src/AFactory.h src/SDLFactory.cpp src/SDLFactory.h src/SDLGame.cpp src/SDLGame.h src/SDLTexturemanager.cpp src/SDLTexturemanager.h src/gamestates/Gamestate.cpp src/gamestates/Gamestate.h src/gamestates/Menustate.cpp src/gamestates/Menustate.h src/gamestates/GameStateManager.cpp src/gamestates/GameStateManager.h src/gamestates/GamestateAFactory.cpp src/gamestates/GamestateAFactory.h src/gamestates/GamestateSDLFactory.cpp src/gamestates/GamestateSDLFactory.h src/gamestates/SDLMenustate.cpp src/gamestates/SDLMenustate.h src/UI/Background.cpp src/UI/Background.h)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY} -lmingw32 -lSDL2main -lSDL2 -lSDL2_image )