#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"

Garden::Garden(const std::string &name) : _name(name)
{}

void Garden::addPlant(Plant *plant)
{
    _plants.push_back(plant);
}

void Garden::printWhoNeedsWater()
{
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->isWaterNeeded()) {
            std::cout << "The " << _plants[i]->getColor() << " " << _plants[i]->typeToString(_plants[i]->getType())
                      << " needs water" << std::endl;
        } else {
            std::cout << "The " << _plants[i]->getColor() << " " << _plants[i]->typeToString(_plants[i]->getType())
                      << " doesn't need water" << std::endl;
        }
    }
    std::cout << std::endl;
}

void Garden::toWater(float water)
{
    std::cout << "watering with " << water << std::endl;

    std::vector<Plant *> thirstyPlants;
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->isWaterNeeded()) {
            thirstyPlants.push_back(_plants[i]);
        }
    }

    for (int j = 0; j < thirstyPlants.size(); ++j) {
        thirstyPlants[j]->toWater(water / thirstyPlants.size());
    }
}