#include "Farm.h"
#include <iostream>

Farm::Farm() : _freeSlots(10)
{}

void Farm::add(Animal animal)
{
    _animals.push_back(animal);
}

std::vector<Animal> Farm::getAnimals()
{
    return _animals;
}

int Farm::getFreeSlots() const
{
    return freeSlots;
}