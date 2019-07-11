#include "Station.h"
#include <iostream>

Station::Station() : _gasAmount(1000)
{
    std::cout << "Station constructor ran without parameter" << std::endl;
}

void Station::fill(Car &car)
{
    _gasAmount--;
    car.fill();
}

int Station::getGasAmount() const
{
    return _gasAmount;
}
