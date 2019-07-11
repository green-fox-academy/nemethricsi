#include "Animal.h"
#include <iostream>

Animal::Animal() : _hunger(50), _thirst(50)
{
    std::cout << "Constructor ran without parameters" << std::endl;
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
