#include "draw.h"

// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a 50 long horizontal line from that point.
// Draw at least 3 lines with that function using a loop.

void drawHorizontal(int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for(int i = 0; i < 10; i++){
        drawHorizontal(10, 20 * i, gRenderer);
    }
}

void drawHorizontal(int x, int y, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, x, y, x + 50, y);
}