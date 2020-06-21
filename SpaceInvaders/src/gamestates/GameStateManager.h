//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_GAMESTATEMANAGER_H
#define SPACEINVADERS_GAMESTATEMANAGER_H

#include "Gamestate.h"
#include "Menustate.h"

class GameStateManager {
public:
    GameStateManager();

    virtual ~GameStateManager();
    int getCurrentstate();

    void setState(int state);
    void update();
    void render();
    void handle();

private:

    Gamestate *Gamestates[4] = {nullptr, nullptr, nullptr, nullptr};
    int currentstate = 0;
};


#endif //SPACEINVADERS_GAMESTATEMANAGER_H
