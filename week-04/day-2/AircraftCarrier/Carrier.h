#ifndef AIRCRAFTCARRIER_CARRIER_H
#define AIRCRAFTCARRIER_CARRIER_H

#include "Aircraft.h"


class Carrier
{
public:
    Carrier(int storeOfAmmo, int hp);

    void add(Aircraft &aircraft);

    void reduceHp(int hp);

    void fill();

    void fight(Carrier &carrier);

    void getStatus();

private:
    std::vector<Aircraft *> _aircrafts;
    int _storeOfAmmo;
    int _hp;
};


#endif //AIRCRAFTCARRIER_CARRIER_H
