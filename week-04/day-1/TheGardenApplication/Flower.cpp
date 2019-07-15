#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"

Flower::Flower(Type type, const std::string &color) : Plant(type, color)
{}

bool Flower::isWaterNeeded()
{
    return _currentWaterAmount < 5;
}

void Flower::toWater(float water)
{
    _currentWaterAmount += 0.75 * water;
}
