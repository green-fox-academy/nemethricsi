#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include <iostream>


#include <string>

class Vehicle
{
public:

    Vehicle(int wheels, int speed, const std::string &color);

    int getWheels();

    int getSpeed();

    std::string &getColor();


protected:
    int _wheels;
    int _speed;
    std::string _color;

};


#endif //FLYABLE_VEHICLE_H
