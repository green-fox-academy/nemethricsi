#include "draw.h"

// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Fill the canvas with lines from the edges, every 20 px, to the center.

void draw(SDL_Renderer *gRenderer)
{
    int step = 20;
    int fullWidth = 640;
    int fullHeight = 480;

    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    for (int i = 0; i <= fullWidth; i += step) {
        SDL_RenderDrawLine(gRenderer, i, 0, fullWidth / 2, fullHeight / 2);
    }

    for (int i = 0; i <= fullHeight; i += step) {
        SDL_RenderDrawLine(gRenderer, fullWidth, i, fullWidth / 2, fullHeight / 2);
    }

    for (int i = fullWidth; i >= 0; i -= step) {
        SDL_RenderDrawLine(gRenderer, i, fullHeight, fullWidth / 2, fullHeight / 2);
    }

    for (int i = fullHeight; i >= 0; i -= step) {
        SDL_RenderDrawLine(gRenderer, 0, i, fullWidth / 2, fullHeight / 2);
    }
}