#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H


#include <iostream>
#include "gamestates/GameStateManager.h"

class Game {

public:
    int SCALE;
    GameStateManager *gsm;

    Game() = default;

    virtual ~Game() = default;

    virtual void init(const char* title, int width, int height, int SCALE);

    virtual void setFstart();

    virtual double calcFps(int delay);

    virtual void handle();
    virtual void update();
    virtual void render();
    virtual void destroy();

    virtual bool rendering();

};


#endif //SPACEINVADERS_GAME_H
