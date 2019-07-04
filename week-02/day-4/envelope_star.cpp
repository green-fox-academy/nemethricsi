#include "draw.h"

// Green Fox green Color: #3BB878 lila: #6F73D2

void draw(SDL_Renderer *gRenderer)
{
    int fullSize = 400;
    int halfSize = fullSize / 2;
    int step = 6; // decrease until 1 to make it thicker
    SDL_SetRenderDrawColor(gRenderer, 0x3B, 0xB8, 0x78, 0xFF);


    // TOP - RIGHT
    for (int i = 0; i <= halfSize; i += step) {
        SDL_RenderDrawLine(gRenderer, halfSize, i, i + halfSize, halfSize);
    }

    // BOTTOM - LEFT
    for (int i = 0; i <= halfSize; i += step) {
        SDL_RenderDrawLine(gRenderer, i, halfSize, halfSize, i + halfSize);
    }

    // TOP - LEFT
    for (int i = 0; i <= halfSize; i += step) {
        SDL_RenderDrawLine(gRenderer, i, halfSize, halfSize, halfSize - i);
    }

    // BOTTOM - RIGHT
    for (int i = 0; i <= halfSize; i += step) {
        SDL_RenderDrawLine(gRenderer, 2 * halfSize - i, halfSize, halfSize, i + halfSize);
    }
}