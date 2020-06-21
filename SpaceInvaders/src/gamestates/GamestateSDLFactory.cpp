//
// Created by basca on 21/06/2020.
//

#include "GamestateSDLFactory.h"
#include "SDLMenustate.h"

GamestateSDLFactory::GamestateSDLFactory() {}

GamestateSDLFactory::~GamestateSDLFactory() {

}

Gamestate *GamestateSDLFactory::createMenustate(GameStateManager gsm) {
    Gamestate *Gs = new SDLMenustate();
    return Gs;
}
