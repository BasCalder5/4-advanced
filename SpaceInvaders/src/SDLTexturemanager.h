//
// Created by basca on 21/06/2020.
//

#ifndef SPACEINVADERS_SDLTEXTUREMANAGER_H
#define SPACEINVADERS_SDLTEXTUREMANAGER_H

#include "SDLGame.h"

class SDLTexturemanager {
public:
    static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* ren);
};


#endif //SPACEINVADERS_SDLTEXTUREMANAGER_H
