//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_GAMESTATE_H
#define SPACEINVADERS_GAMESTATE_H


#include "GameStateManager.h"

class Gamestate {
public:
    virtual void init();
    virtual void update();
    virtual void render();
    virtual void handle();

protected:
    GameStateManager gsm;

};


#endif //SPACEINVADERS_GAMESTATE_H
