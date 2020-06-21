//
// Created by basca on 21/06/2020.
//

#include "Background.h"

Background::Background() {}

Background::~Background() {

}

void Background::setPosition(int x, int y) {
    Background::x = x;
    Background::y = y;
}

void Background::setVector(int dx, int dy) {
    this->dx = dx;
    this->dy = dy;
}

void Background::update(){
    x += dx;
    y += dy;
}
