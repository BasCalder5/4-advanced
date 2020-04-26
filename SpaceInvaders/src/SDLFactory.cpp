//
// Created by basca on 26/04/2020.
//

#include "SDLFactory.h"
#include "SDLGame.h"

SDLFactory::SDLFactory() {}

SDLFactory::~SDLFactory() {}

Game *SDLFactory::createGame() {
    Game *game = new SDLGame();
    return game;
}
