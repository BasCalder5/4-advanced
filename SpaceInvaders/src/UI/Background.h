//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_BACKGROUND_H
#define SPACEINVADERS_BACKGROUND_H


class Background {
public:
    static int x, y;

    Background();

    virtual ~Background();

    void setPosition(int x, int y);

    void setVector(int dx, int dy);

    void update() const;



private:
    int dx, dy;

};


#endif //SPACEINVADERS_BACKGROUND_H
