#include "Car.h"
#include <iostream>

Car::Car(std::string name, int gasAmount, int capacity) : _name(name), _gasAmount(gasAmount), _capacity(capacity)
{
    std::cout << "Car constructor ran with 3 parameters" << std::endl;
}

bool Car::isFull()
{
    if(_gasAmount == _capacity){
        return true;
    }
}

void Car::fill()
{
    _gasAmount++;
}

const std::string &Car::getName() const
{
    return _name;
}

