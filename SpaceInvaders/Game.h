#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H

#include "SDL2/SDL.h"
#include <iostream>

class Game {

public:
    Game();

    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height);

    void handle();
    void update();
    void render();
    void destroy();

    bool rendering() {return isRendering;}
private:
    bool isRendering;
    SDL_Window *window;
    SDL_Renderer *renderer;

};


#endif //SPACEINVADERS_GAME_H
