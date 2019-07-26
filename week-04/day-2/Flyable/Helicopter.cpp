#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter(int wheels, int speed, const std::string &color) : Vehicle(wheels, speed, color)
{}

void Helicopter::land()
{
    std::cout << "I can land with a machine." << std::endl;
}

void Helicopter::fly()
{
    std::cout << "I can fly with machines." << std::endl;
}

void Helicopter::takeOff()
{
    std::cout << "I can take off with machines." << std::endl;
}

int Helicopter::getWheels()
{
    return Vehicle::getWheels();
}

int Helicopter::getSpeed()
{
    return Vehicle::getSpeed();
}

std::string &Helicopter::getColor()
{
    return Vehicle::getColor();
}
