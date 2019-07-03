#include "draw.h"

void drawRow(int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    // draw border
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_Rect drawRect = {80, 0, 480, 480};
    SDL_RenderDrawRect(gRenderer, &drawRect);

    // draw Odd rows
    int x = 80;
    for(int i = 0; i < 361; i += 120){
        drawRow(x, i, gRenderer);
    }

    // draw Even rows
    x = 140;
    for(int i = 60; i < 421; i += 120){
        drawRow(x, i, gRenderer);
    }
}

void drawRow(int x, int y, SDL_Renderer *gRenderer)
{
    for (int i = 0; i < 4; i++) {
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_Rect fillRect = {x, y, 60, 60};
        SDL_RenderFillRect(gRenderer, &fillRect);

        x += 120;
    }
}