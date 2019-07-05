#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    int fullSize = 400;
    int halfSize = fullSize / 2;
    int step = 10; // decrease until 1 to make it thicker


    SDL_SetRenderDrawColor(gRenderer, 0x94, 0x3D, 0x77, 0xFF);
    for (int i = 0; i <= halfSize; i += step) {
        // TOP - RIGHT
        SDL_RenderDrawLine(gRenderer, halfSize, i, i + halfSize, halfSize);
        // BOTTOM - LEFT
        SDL_RenderDrawLine(gRenderer, i, halfSize, halfSize, i + halfSize);
        // TOP - LEFT
        SDL_RenderDrawLine(gRenderer, i, halfSize, halfSize, halfSize - i);
        // BOTTOM - RIGHT
        SDL_RenderDrawLine(gRenderer, fullSize - i, halfSize, halfSize, i + halfSize);
    }
}