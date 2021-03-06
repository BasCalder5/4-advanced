#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::init(const char *title, int xpos, int ypos, int width, int height) {
    int flags = 0;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) //init succesfull if == 0
    {
        std::cout << "SDL init succesful..." << std::endl;
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window)
            std::cout << "Window created succesfully..." << std::endl;
        renderer = SDL_CreateRenderer(window, -1, flags);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255,0,255, 255);
            std::cout << "Renderer created succesfully..." << std::endl;
        }

        isRendering = true;
    } else
        isRendering = false;
}

void Game::handle() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRendering = false;
            break;
        default:
            break;
    }
}

void Game::update() {
    cnt++;
    std::cout << cnt << std::endl;
}

void Game::render() {
    SDL_RenderClear(renderer);
    // add stuff to render
    SDL_RenderPresent(renderer);
}

void Game::destroy() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Window destroyed!" << std::endl;
}
