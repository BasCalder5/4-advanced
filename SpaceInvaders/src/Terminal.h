//
// Created by basca on 13/04/2020.
//

#ifndef SPACEINVADERS_TERMINAL_H
#define SPACEINVADERS_TERMINAL_H


class Terminal {
public:
    Terminal() = default;
    ~Terminal() = default;
    void updateTerminalData(double fps);

private:
    static void clearScreen();

};


#endif //SPACEINVADERS_TERMINAL_H
