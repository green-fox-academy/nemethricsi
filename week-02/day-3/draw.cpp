 #include "draw.h"

 void draw(SDL_Renderer* gRenderer) {

     //choose color
     SDL_SetRenderDrawColor(gRenderer, 0x3B /*R*/, 0xB8 /*G*/, 0x78 /*B*/, 0xFF /*A*/);
     //create a rectangle
     SDL_Rect fillRect = { 100, 100, 20, 50};
     //draw rectangle
     SDL_RenderFillRect( gRenderer, &fillRect );

 }
