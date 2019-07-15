#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"

Tree::Tree(Type type, const std::string &color) : Plant(type, color)
{}

bool Tree::isWaterNeeded()
{
    return _currentWaterAmount < 10;
}

void Tree::toWater(float water)
{
    _currentWaterAmount += 0.4 * water;
}
