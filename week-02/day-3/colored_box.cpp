#include "draw.h"

// Draw a box that has different colored lines on each edge.
// The center of the box should align with the center of the screen.

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x3B /*R*/, 0xB8 /*G*/, 0x78 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 220, 140, 420, 140);

    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 420, 140, 420, 340);

    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 420, 340, 220, 340);

    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0x00 /*G*/, 0xFF /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 220, 340, 220, 140);
}
