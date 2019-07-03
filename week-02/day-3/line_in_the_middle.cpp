#include "draw.h"

// draw a red horizontal line to the canvas' middle.
// draw a green vertical line to the canvas' middle.

void draw(SDL_Renderer* gRenderer) {

    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);

    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 320, 0, 320, 480);

}


