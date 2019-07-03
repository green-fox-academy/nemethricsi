#include "draw.h"

// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
// Pay attention for the outlines as well

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 0; i < 19; ++i) {

        int squaresize = 15;

        // outline
        SDL_SetRenderDrawColor(gRenderer, 0x0, 0x0, 0x0, 0xFF);
        SDL_Rect drawRect = {i * squaresize, i * squaresize, squaresize, squaresize};
        SDL_RenderDrawRect(gRenderer, &drawRect);

        // fill
        SDL_SetRenderDrawColor(gRenderer, 0xB1, 0x45, 0xF3, 0xFF);
        SDL_Rect fillRect = {i * squaresize + 1, i * squaresize + 1, squaresize - 2, squaresize - 2};
        SDL_RenderFillRect(gRenderer, &fillRect);
    }
}