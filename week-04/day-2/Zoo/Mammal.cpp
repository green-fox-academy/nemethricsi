#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "EggLayer.h"
#include "Reptile.h"
#include "EggLayer.h"
#include "Bird.h"

Mammal::Mammal(const std::string &name) : Animal(name)
{}

Mammal::Mammal(const std::string &name, int age, Gender gender, int hunger, float speed) : Animal(name, age, gender,
                                                                                                  hunger, speed)
{}

std::string Mammal::getName()
{
    return _name;
}

std::string Mammal::breed()
{
    return "pushing miniature versions out";
}
