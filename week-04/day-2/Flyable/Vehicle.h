#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H
#include <iostream>


#include <string>

class Vehicle
{
public:

    Vehicle(int wheels, int speed, const std::string &color);

    virtual int getWheels() = 0;

    virtual int getSpeed() = 0;

    virtual std::string &getColor() = 0;

protected:
    int _wheels;
    int _speed;
    std::string _color;

};


#endif //FLYABLE_VEHICLE_H
