//
// Created by basca on 26/04/2020.
//

#ifndef SPACEINVADERS_SDLGAME_H
#define SPACEINVADERS_SDLGAME_H


#include "Game.h"

class SDLGame : public Game{
public:
    SDLGame() = default;

    ~SDLGame() override = default;

    void init(const char* title, int xpos, int ypos, int width, int height) override;

    void handle() override;
    void update() override;
    void render() override;
    void destroy() override;

    bool rendering() override {return isRendering;}
private:
    bool isRendering;
    SDL_Window *window;
    SDL_Renderer *renderer;
};


#endif //SPACEINVADERS_SDLGAME_H
