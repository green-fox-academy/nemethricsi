#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include "Car.h"


class Station
{
public:
    Station();

    void fill(Car &car);

    int getGasAmount() const;

private:
    int _gasAmount;

};


#endif //PETROLSTATION_STATION_H
