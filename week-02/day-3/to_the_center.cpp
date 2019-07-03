#include "draw.h"

// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.
// 3B B8 78

void drawLineToTheCenter(int a, int b, SDL_Renderer *render);

void draw(SDL_Renderer *gRenderer)
{
    int x = 5;
    int y = 0;

    for (int i = 0; i < 127; i++) {
        drawLineToTheCenter(x * i, y, gRenderer);
    }

}

void drawLineToTheCenter(int a, int b, SDL_Renderer *render)
{
    SDL_SetRenderDrawColor(render, 0x3B, 0xB8, 0x78, 0xFF);
    SDL_RenderDrawLine(render, a, b, 320, 240);
}
