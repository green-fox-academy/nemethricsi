#include "draw.h"

// Green Fox green Color: #3BB878 lila: #6F73D2

void draw(SDL_Renderer *gRenderer)
{
    int fullSize = 400;
    int step = 1;


    SDL_SetRenderDrawColor(gRenderer, 0x3B, 0xB8, 0x78, 0xFF);
    for(int i = 0; i <= fullSize; i += step){
        SDL_RenderDrawLine(gRenderer, 0, i, i, fullSize);
    }

    SDL_SetRenderDrawColor(gRenderer, 0x6F, 0x73, 0xD2, 0xFF);
    for(int i = 0; i <= fullSize; i += step){
        SDL_RenderDrawLine(gRenderer, i, 0, fullSize, i);
    }
}