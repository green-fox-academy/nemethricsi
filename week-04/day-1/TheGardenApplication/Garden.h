#ifndef THEGARDENAPPLICATION_GARDEN_H
#define THEGARDENAPPLICATION_GARDEN_H

#include "Plant.h"
#include <vector>


class Garden
{
public:
    Garden();

    void addPlant(Plant *plant);

    void printWhoNeedsWater();

    void toWater(float water);

private:
    std::vector<Plant *> _plants;
};


#endif //THEGARDENAPPLICATION_GARDEN_H
