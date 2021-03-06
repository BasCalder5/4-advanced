#include "Game.h"
#include "SDL2/SDL.h"

Game *game = nullptr;

int main(int argc, char ** argv) {

    const int FPS = 60;
    const int fDelay = 1000/FPS;
    const int SCALE = 2;
    const int HEIGHT = 360;
    const int WIDTH = 540;

    Uint32 fStart;
    int fTime;


    game = new Game;

    game->init("SpaceInvaders Engine test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH * SCALE , HEIGHT * SCALE);

    while(game->rendering()) // Game is running
    {
        fStart = SDL_GetTicks();

        game->handle(); // Handle input
        game->update(); // Update objects
        game->render(); // Render changes

        fTime = SDL_GetTicks() - fStart;
        if(fDelay > fTime)
        {
            SDL_Delay(fDelay - fTime);
        }
    }
    game->destroy();
    return 0;
}
