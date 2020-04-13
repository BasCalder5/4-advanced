#include <windows.h>
#include "Game.h"
#include "SDL2/SDL.h"

Game *game = nullptr;

void clearScreen() // temp measure to clear console for fps rendering
{
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}

int main(int argc, char **argv) {

    const int fDelay = 17; // 1000/60 is 16,666667 so round up
    const int SCALE = 2;
    const int HEIGHT = 360;
    const int WIDTH = 480;

    Uint32 fStart;
    int fTime;
    float fps;

    game = new Game;

    game->init("SpaceInvaders Engine test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH * SCALE,
               HEIGHT * SCALE);

    while (game->rendering()) // Game is running
    {
        fStart = SDL_GetTicks();

        game->handle(); // Handle input
        game->update(); // Update objects
        game->render(); // Render changes

        fTime = SDL_GetTicks() - fStart;
        if(fDelay > fTime)            // FPS limiter to 60
        {
            SDL_Delay(fDelay - fTime);
        }
        fTime = SDL_GetTicks() - fStart;
        fps = 1000.0 / fTime;
        clearScreen();
        std::cout << std::endl << std::endl << std::endl << "Fps: " << fps << std::endl;
    }
    game->destroy();
    return 0;
}
