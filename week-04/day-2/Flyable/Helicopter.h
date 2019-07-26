#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Vehicle.h"
#include "Flyable.h"

class Helicopter : public Flyable, public Vehicle
{
public:

    Helicopter(int wheels, int speed, const std::string &color, std::string type);

    std::string land() override;

    std::string fly() override;

    std::string takeOff() override;

};


#endif //FLYABLE_HELICOPTER_H
