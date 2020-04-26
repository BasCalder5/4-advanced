#include "Terminal.h"
#include <windows.h>
#include <iostream>

void Terminal::updateTerminalData(double fps) {
    clearScreen();
    std::cout << "Fps: " << fps << std::endl;
}

void Terminal::clearScreen() // clear console for fps rendering
{
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}


