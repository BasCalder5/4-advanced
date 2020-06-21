//
// Created by basca on 21/06/2020.
//

#include "SDLTexturemanager.h"

SDL_Texture *SDLTexturemanager::loadTexture(const char *fileName, SDL_Renderer* ren) {
    SDL_Surface *tempSurface = IMG_Load(fileName);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);
    return tex;
}
