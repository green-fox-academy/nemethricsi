#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"

Plant::Plant(Type type, const std::string &color, float currentWaterAmount) : _type(type), _color(color),
                                                                              _currentWaterAmount(currentWaterAmount)
{}

bool Plant::isWaterNeeded()
{
    return false;
}

void Plant::toWater(float water)
{
    _currentWaterAmount += water;

}

std::string Plant::typeToString(Type type)
{
    switch (type) {
        case Type::TREE:
            return "tree";
        case Type::FLOWER:
            return "flower";
    }
}

Type Plant::getType() const
{
    return _type;
}

const std::string &Plant::getColor() const
{
    return _color;
}

float Plant::getCurrentWaterAmount() const
{
    return _currentWaterAmount;
}
