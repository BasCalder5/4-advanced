//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_GAMESTATEAFACTORY_H
#define SPACEINVADERS_GAMESTATEAFACTORY_H

#include "GameStateManager.h"
#include "Gamestate.h"

class GamestateAFactory {
public:
    GamestateAFactory();
    virtual ~GamestateAFactory();

    virtual Gamestate *createMenustate(GameStateManager gsm);
};


#endif //SPACEINVADERS_GAMESTATEAFACTORY_H
