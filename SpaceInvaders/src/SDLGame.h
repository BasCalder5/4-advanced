//
// Created by basca on 26/04/2020.
//

#ifndef SPACEINVADERS_SDLGAME_H
#define SPACEINVADERS_SDLGAME_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include "Game.h"

class SDLGame : public Game{
public:
    SDL_Window *window;
    SDL_Renderer *renderer;
    Uint32 fStart;

    SDLGame() = default;

    ~SDLGame() override = default;

    void init(const char* title, int width, int height, int SCALE) override;

    void setFstart() override;
    double calcFps(int delay) override;
    void renderBg(SDL_Texture *texture);

    void handle() override;
    void update() override;
    void render() override;
    void destroy() override;

    bool rendering() override {return isRunning;}
private:
    bool isRunning;
};


#endif //SPACEINVADERS_SDLGAME_H
