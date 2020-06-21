//
// Created by basca on 26/04/2020.
//

#include "SDLGame.h"
#include "SDLTexturemanager.h"
#include "UI/Background.h"


int cnt;
SDL_Texture *playership;
SDL_Rect srcR, destR;

void SDLGame::init(const char *title, int width, int height, int SCALE) {
    Game::init(title, width, height, SCALE);

    int flags = 0;
    this->SCALE = SCALE;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << std::endl << "SDL init succesful..." << std::endl;
        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width*SCALE, height*SCALE, flags);
        if (window)
            std::cout << "Window created succesfully..." << std::endl;
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);  // flag for using gpu for rendering
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);
            std::cout << "Renderer created succesfully..." << std::endl;
        }

        isRunning = true;
    }
    playership = SDLTexturemanager::loadTexture("../assets/playership.png", renderer);
}

void SDLGame::handle() {
    Game::handle();
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void SDLGame::update() {
    Game::update();
    cnt++;
    destR.h = 8*SCALE;
    destR.w = 16*SCALE;


    destR.x = cnt;
}

void SDLGame::render() {
    Game::render();
    SDL_RenderClear(renderer);
    if (gsm->getCurrentstate() != 1){
        Background *bg = new Background();
    }
    gsm->render();
    SDL_RenderCopy(renderer, playership, nullptr, &destR);

    SDL_RenderPresent(renderer);
}

void SDLGame::destroy() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Window destroyed!" << std::endl;
}

double SDLGame::calcFps(int delay) {
    Uint32 fTime = SDL_GetTicks() - fStart;

    if (delay > fTime)            // FPS limiter to 60
    {
        SDL_Delay(delay - fTime);
    }
    fTime = SDL_GetTicks() - fStart;
    return 1000.0 / fTime;
}

void SDLGame::setFstart() {
    fStart = SDL_GetTicks();
}

void SDLGame::renderBg(const char *texture) {
    SDL_Texture *text =  SDLTexturemanager(texture, this->renderer)
}
