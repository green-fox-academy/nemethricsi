#ifndef THEGARDENAPPLICATION_GARDEN_H
#define THEGARDENAPPLICATION_GARDEN_H

#include "Plant.h"
#include <vector>


class Garden
{
public:
    Garden(const std::string &name);

    void addPlant(Plant *plant);

    void printWhoNeedsWater();

    void toWater(float water);

private:
    std::string _name;
    std::vector<Plant *> _plants;

};


#endif //THEGARDENAPPLICATION_GARDEN_H
