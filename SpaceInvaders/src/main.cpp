#include "Game.h"
#include "AFactory.h"
#include "SDLFactory.h"

AFactory *AF = new SDLFactory();

int main(int argc, char **argv) {

    const int fDelay = 16; // 1000/60 is 16,666667 so round down
    const int SCALE = 4;
    const int HEIGHT = 172;
    const int WIDTH = 256;

    Game *game = AF->createGame();


    game->init("SpaceInvaders Engine test", WIDTH, HEIGHT, SCALE);

    while (game->rendering()) // Game is running
    {
        game->setFstart();

        game->handle(); // Handle input
        game->update(); // Update objects
        game->render(); // Render changes

        game->calcFps(fDelay);
    }
    game->destroy();
    return 0;
}
