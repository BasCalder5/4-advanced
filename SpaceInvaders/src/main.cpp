#include "Game.h"
#include "Terminal.h"
#include "SDL2/SDL.h"

Game *game = nullptr;
Terminal *terminal = nullptr;

double calcFps(Uint32 startTime, int delay) {
    Uint32 fTime = SDL_GetTicks() - startTime;

    if(delay > fTime)            // FPS limiter to 60
    {
        SDL_Delay(delay - fTime);
    }
    fTime = SDL_GetTicks() - startTime;
    return 1000.0 / fTime;
}

int main(int argc, char **argv) {

    const int fDelay = 17; // 1000/60 is 16,666667 so round up
    const int SCALE = 2;
    const int HEIGHT = 360;
    const int WIDTH = 480;
    Uint32 fStart;

    game = new Game;
    terminal = new Terminal;

    game->init("SpaceInvaders Engine test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH * SCALE,
               HEIGHT * SCALE);

    while (game->rendering()) // Game is running
    {
        fStart = SDL_GetTicks();

        game->handle(); // Handle input
        game->update(); // Update objects
        game->render(); // Render changes

        terminal->updateTerminalData(calcFps(fStart, fDelay));
    }
    game->destroy();
    return 0;
}