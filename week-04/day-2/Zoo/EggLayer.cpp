#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "EggLayer.h"
#include "Reptile.h"
#include "EggLayer.h"
#include "Bird.h"

EggLayer::EggLayer(const std::string &name) : Animal(name)
{}

EggLayer::EggLayer(const std::string &name, int age, Gender gender, int hunger, float speed) : Animal(name, age, gender,
                                                                                                      hunger, speed)
{}

std::string EggLayer::getName()
{
    return _name;
}

std::string EggLayer::breed()
{
    return "laying eggs";
}




