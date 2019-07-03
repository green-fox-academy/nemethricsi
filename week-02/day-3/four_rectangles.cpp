#include "draw.h"

// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 0; i < 5; i++) {
        SDL_SetRenderDrawColor(gRenderer, i, i, 60 * i, 255);
        SDL_Rect fillRect = {50 * i + i, 50 * i + i, 50 * i, 50 * i};
        SDL_RenderFillRect(gRenderer, &fillRect);
    }
}