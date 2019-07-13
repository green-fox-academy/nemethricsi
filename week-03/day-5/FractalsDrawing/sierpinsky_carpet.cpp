#include "draw.h"
#include <SDL2_gfxPrimitives.h>

const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;
void draw_recursive(SDL_Renderer* gRenderer, Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, int depth)
{
    if(depth == 7){
        return;
    }

    rectangleRGBA(gRenderer, x1, y1, x2, y2, 0x00, 0x00, 0x00, 0xFF);
    draw_recursive(gRenderer, (x2 - x1) / 3, (y2 - y1) / 3, 2 * ((x2 - x1) / 3), 2 * ((y2 - y1) / 3), depth + 1);
    draw_recursive(gRenderer, 4 * ((x2 - x1) / 3), (y2 - y1) / 3, 5 * ((x2 - x1) / 3), 2 * ((y2 - y1) / 3), depth + 1);
    // draw_recursive(gRenderer, 7 * ((x2 - x1) / 3), (y2 - y1) / 3, 7 * ((x2 - x1) / 3), 2 * ((y2 - y1) / 3), depth + 1);
    //draw_recursive(gRenderer, x1, y1 + (y2 - y1) / 3, x1 + (x2 - x1) / 3,  y1 + 2 * ((y2 - y1) / 3), depth + 1);
}


void draw(SDL_Renderer* gRenderer) {


    draw_recursive(gRenderer, SCREEN_WIDTH / 3, SCREEN_HEIGHT / 3, 2 * (SCREEN_WIDTH / 3), 2 * (SCREEN_HEIGHT / 3), 0);


}

// rectangleColor(SDL_Renderer * renderer, Sint16 x1, Sint16 y1, Sint16 x2, Sint16 y2, Uint32 color)
