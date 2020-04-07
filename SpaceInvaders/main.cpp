#include "Game.h"
#include "SDL2/SDL.h"

Game *game = nullptr;

int main(int argc, char ** argv) {

    game = new Game;

    game->init("SpaceInvaders Engine test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 720, 480);

    while(game->rendering()) // Game is running
    {
        game->handle(); // Handle input
        game->update(); // Update objects
        game->render(); // Render changes
    }
    game->destroy();
    return 0;
}
