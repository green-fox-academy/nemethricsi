#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name) : _name(name), _hunger(50), _thirst(50)
{
    std::cout << "Constructor ran with 1 parameter" << std::endl;
    std::cout << std::endl;
}

void Animal::eat()
{
    _hunger--;
}

void Animal::drink()
{
    _thirst--;
}

void Animal::play()
{
    _hunger++;
    _thirst++;
}

std::string Animal::getName() const
{
    return _name;
}

int Animal::getHunger() const
{
    return _hunger;
}

int Animal::getThirst() const
{
    return _thirst;
}

