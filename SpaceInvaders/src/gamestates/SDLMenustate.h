//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_SDLMENUSTATE_H
#define SPACEINVADERS_SDLMENUSTATE_H


#include "Menustate.h"

class SDLMenustate : public Menustate{
public:
    SDLMenustate(GameStateManager gsm);

    virtual ~SDLMenustate();

    void render() override;
    void handle() override;
};


#endif //SPACEINVADERS_SDLMENUSTATE_H
