//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_MENUSTATE_H
#define SPACEINVADERS_MENUSTATE_H


#include "Gamestate.h"

class Menustate : public Gamestate{
public:
    Menustate(GameStateManager gsm);
    virtual ~Menustate();
    void init() override;
    void update() override;
    virtual void render();
    virtual void handle();
};


#endif //SPACEINVADERS_MENUSTATE_H
