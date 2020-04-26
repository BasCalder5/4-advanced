//
// Created by basca on 26/04/2020.
//

#ifndef SPACEINVADERS_AFACTORY_H
#define SPACEINVADERS_AFACTORY_H


#include "Game.h"

class AFactory {
public:
    AFactory();

    virtual ~AFactory();

    virtual Game *createGame();
};


#endif //SPACEINVADERS_AFACTORY_H
