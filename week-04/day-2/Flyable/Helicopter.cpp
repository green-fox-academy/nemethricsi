#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter(int wheels, int speed, const std::string &color, std::string type) : Vehicle(wheels, speed,
                                                                                                    color),
                                                                                            Flyable(type)
{}

std::string Helicopter::land()
{
    return "land with a machine.";
}

std::string Helicopter::fly()
{
    return "I can fly with machines.";
}

std::string Helicopter::takeOff()
{
    return "I can take off with machines.";
}
