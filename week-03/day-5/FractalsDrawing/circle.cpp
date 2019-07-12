#include "draw.h"
#include <SDL2_gfxPrimitives.h>
#include <math.h>

const int SCREEN_WIDTH = 700;
const int SCREEN_HEIGHT = 700;
void draw_recursive(SDL_Renderer* gRenderer, Sint16 x, Sint16 y, Sint16 rad, int depth)
{
    if(depth == 7){
        return;
    }

    circleRGBA(gRenderer, x, y, rad, 0x00, 0x00, 0x00, 0xFF);
    draw_recursive(gRenderer, x + (sin((1 * M_PI)/3 + (M_PI / 6)) * rad), y - (cos((1 * M_PI)/3 + (M_PI / 6)) * rad), 0.75 * rad, depth + 1);
    draw_recursive(gRenderer, x + (sin((2 * M_PI)/3 + (M_PI / 6)) * rad), y - (cos((2 * M_PI)/3 + (M_PI / 6)) * rad), 0.75 * rad, depth + 1);
    draw_recursive(gRenderer, x, y, rad - 0.1 * rad, depth + 1);
    //draw_recursive(gRenderer, x1 + 2*((x2 - x1) / 3), y1 + (y2 - y1) / 3, x2,y1 + 2 * ((y2 - y1) / 3), depth + 1);
    //draw_recursive(gRenderer, x1 + (x2 - x1) / 3, y1 + 2 * ((y2 - y1) / 3), x1 + 2*((x2 - x1) / 3),y2, depth + 1);
    //draw_recursive(gRenderer, x1, y1 + (y2 - y1) / 3, x1 + (x2 - x1) / 3,  y1 + 2 * ((y2 - y1) / 3), depth + 1);
}


void draw(SDL_Renderer* gRenderer) {


    draw_recursive(gRenderer, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, 0);


}

// X = Xo + (sin((n * pi)/3 + (pi / 6)) * r)
// Y = Yo - (cos((n * pi)/3 + (pi / 6)) * r)
//int circleRGBA(SDL_Renderer * renderer, Sint16 x, Sint16 y, Sint16 rad, Uint8 r, Uint8 g, Uint8 b, Uint8 a)