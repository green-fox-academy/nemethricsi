#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H
#include "Vehicle.h"
#include "Flyable.h"

class Helicopter : public Flyable, public Vehicle
{
public:

    Helicopter(int wheels, int speed, const std::string &color);

    void land() override;

    void fly() override;

    void takeOff() override;

    int getWheels() override;

    int getSpeed() override;

    std::string &getColor() override;

};


#endif //FLYABLE_HELICOPTER_H
