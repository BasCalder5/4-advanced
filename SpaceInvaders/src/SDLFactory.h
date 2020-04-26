//
// Created by basca on 26/04/2020.
//

#ifndef SPACEINVADERS_SDLFACTORY_H
#define SPACEINVADERS_SDLFACTORY_H


#include "AFactory.h"

class SDLFactory : public AFactory{
public:
    SDLFactory();

    virtual ~SDLFactory();

    Game *createGame() override;
};


#endif //SPACEINVADERS_SDLFACTORY_H
