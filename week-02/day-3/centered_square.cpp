#include "draw.h"

// Draw a green fox green 100x100 square to the canvas' center.

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x3B, 0xB8, 0x78, 0xFF);
    SDL_Rect fillRect = {270, 190, 100, 100};
    SDL_RenderFillRect(gRenderer, &fillRect);
}

