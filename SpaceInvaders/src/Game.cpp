#include "Game.h"

void Game::init(const char *title, int width, int height, int SCALE) {

    gsm = new GameStateManager();
}

void Game::handle() {
    gsm->handle();
}

void Game::update() {
    gsm->update();
}

void Game::render() {
}

void Game::destroy() {}

bool Game::rendering() {
    return false;
}

void Game::setFstart() {}

double Game::calcFps(int delay) {
    return 0;
}
