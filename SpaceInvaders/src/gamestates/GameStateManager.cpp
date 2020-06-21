//
// Created by basca on 21/06/2020.
//

#include "GameStateManager.h"
#include "GamestateSDLFactory.h"

GameStateManager::GameStateManager() {
    GamestateAFactory *GAF = new GamestateSDLFactory();
    Gamestates[0] = GAF->createMenustate(*this);
}

void GameStateManager::setState(int state) {
    currentstate = state;
    Gamestates[state]->init();
}

void GameStateManager::update() {
    Gamestates[currentstate]->update();
}

void GameStateManager::render() {
    Gamestates[currentstate]->render();
}

void GameStateManager::handle() {
    Gamestates[currentstate]->handle();
}

GameStateManager::~GameStateManager() {

}

int GameStateManager::getCurrentstate() {
    return currentstate;
}



