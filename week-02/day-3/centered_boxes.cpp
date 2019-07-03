#include "draw.h"

// create a function that draws one square and takes 1 parameters:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.

void drawSquare(int x, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int squareSize = 150;

    drawSquare(squareSize, gRenderer);
}

void drawSquare(int x, SDL_Renderer *gRenderer)
{
    int fullWindowWidth = 640;
    int fullWindowHeight = 480;

    for (int i = 1; i < 4; i++) {
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
        SDL_Rect drawRect = {(fullWindowWidth - i * x) / 2, (fullWindowHeight - i * x) / 2, i * x, i * x};
        SDL_RenderDrawRect(gRenderer, &drawRect);
    }
}