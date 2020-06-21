//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_GAMESTATESDLFACTORY_H
#define SPACEINVADERS_GAMESTATESDLFACTORY_H


#include "GamestateAFactory.h"

class GamestateSDLFactory : public GamestateAFactory{
public:
    GamestateSDLFactory();

    virtual ~GamestateSDLFactory();

    Gamestate *createMenustate(GameStateManager gsm) override;

};


#endif //SPACEINVADERS_GAMESTATESDLFACTORY_H
