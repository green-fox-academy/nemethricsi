#include "Farm.h"
#include <iostream>

Farm::Farm(int freeSlots) : _initFreeSlots(freeSlots)
{}

void Farm::add(Animal animal)
{
    if (Farm::getFreeSlots() > 0) {
        _animals.push_back(animal);
    } else {
        std::cout << "Sorry there is no free slot for more animal in the Farm" << std::endl;
    }
}

std::vector<Animal> Farm::getAnimals()
{
    return _animals;
}

int Farm::getFreeSlots() const
{
    return _initFreeSlots - _animals.size();
}

Animal Farm::breed(std::string newAnimal)
{
    if (Farm::getFreeSlots() > 0) {
        return Animal(newAnimal);
    } else {
        std::cout << "Sorry there is no free slot for more animal in the Farm" << std::endl;
    }
}

std::vector<Animal> Farm::slaughter()
{
    int leastHunger = _animals[0].getHunger();
    int index = 0;
    for (int i = 1; i < _animals.size(); ++i) {
        if (_animals[i].getHunger() < leastHunger) {
            leastHunger = _animals[i].getHunger();
            index = i;
        }
    }
    _animals.erase(_animals.begin() + index);
    return std::vector<Animal>();
}
