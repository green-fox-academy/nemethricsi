#include "Vehicle.h"

Vehicle::Vehicle(int wheels, int speed, const std::string &color) : _wheels(wheels), _speed(speed), _color(color)
{}

int Vehicle::getWheels()
{
    return _wheels;
}

int Vehicle::getSpeed()
{
    return _speed;
}

std::string &Vehicle::getColor()
{
    return _color;
}
