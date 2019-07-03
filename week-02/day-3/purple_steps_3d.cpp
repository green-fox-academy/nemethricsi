#include "draw.h"

// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
// Pay attention for the outlines as well

void draw(SDL_Renderer *gRenderer)
{
    int xy = 10;
    for (int i = 0; i < 7; ++i) {

        int squaresize = 15;
        int increaser = 10;

        // outline
        SDL_SetRenderDrawColor(gRenderer, 0x0, 0x0, 0x0, 0xFF);
        SDL_Rect drawRect = {xy, xy, squaresize + increaser * i, squaresize + increaser *  i};
        SDL_RenderDrawRect(gRenderer, &drawRect);

        // fill
        SDL_SetRenderDrawColor(gRenderer, 0xB1, 0x45, 0xF3, 0xFF);
        SDL_Rect fillRect = {xy + 1, xy + 1, squaresize + increaser * i - 2, squaresize + increaser * i - 2};
        SDL_RenderFillRect(gRenderer, &fillRect);

        xy = xy + squaresize + increaser * i;
    }
}