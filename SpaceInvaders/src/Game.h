#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H

#include "SDL2/SDL.h"
#include <iostream>

class Game {

public:
    Game() = default;

    virtual ~Game() = default;

    virtual void init(const char* title, int xpos, int ypos, int width, int height);

    virtual void handle();
    virtual void update();
    virtual void render();
    virtual void destroy();

    virtual bool rendering();

};


#endif //SPACEINVADERS_GAME_H
