#include "draw.h"

// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.

void drawSquare(int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int x = 0;
    int y = 0;

    for (int i = 0; i < 3; i++){
        drawSquare(x += 50, y += 50, gRenderer);
    }
}

void drawSquare(int x, int y, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_Rect fillRect = {x, y, 50, 50};
    SDL_RenderFillRect(gRenderer, &fillRect);
}

