#include "draw.h"
#include <vector>

// Create a function that takes 1 parameter:
// An array of {x, y} points
// and connects them with green lines.
// Connect these to get a box: {{10, 10}, {290,  10}, {290, 290}, {10, 290}}
// Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}

void connectTheDots(std::vector<std::vector<int>> vec, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    std::vector<std::vector<int>> boxVector = {
            {10,  10},
            {290, 10},
            {290, 290},
            {10,  290},
            {10,  10}
    };

    std::vector<std::vector<int>> foxVector = {
            {50,  100},
            {70,  70},
            {80,  90},
            {90,  90},
            {100, 70},
            {120, 100},
            {85,  130},
            {50,  100}
    };


    connectTheDots(boxVector, gRenderer);

    connectTheDots(foxVector, gRenderer);

}

void connectTheDots(std::vector<std::vector<int>> vec, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x3B, 0xB8, 0x78, 0xFF);
    for (int i = 0; i < vec.size() - 1; ++i) {
        SDL_RenderDrawLine(gRenderer, vec[i][0], vec[i][1], vec[i + 1][0], vec[i + 1][1]);
    }

}