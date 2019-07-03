#include "draw.h"
#include <ctime>

// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.

// Create a loop that fills the canvas with a rainbow of colored squares.

void drawSquare(int size, int arr[], SDL_Renderer *gRenderer);


void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    int squareSize = 400;

    for (int j = squareSize; j > 0; j -= 20 ){
        int fillColorArray[3] = {rand() % 255, rand() % 255, rand() % 255};
        drawSquare(j, fillColorArray, gRenderer);
    }
}

void drawSquare(int size, int arr[], SDL_Renderer *gRenderer)
{
    int fullWidth = 640;
    int fullHeight = 480;

    SDL_SetRenderDrawColor(gRenderer, arr[0], arr[1], arr[2], 255);
    SDL_Rect fillRect = {(fullWidth - size) / 2, (fullHeight - size) / 2, size, size};
    SDL_RenderFillRect(gRenderer, &fillRect);
}