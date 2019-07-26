#include <iostream>
#include <vector>
#include "Carrier.h"
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

int main()
{
    Carrier usa(300, 3000);
    Carrier russia(200, 2000);

    F35 maverick;
    usa.add(maverick);
    F35 tony;
    usa.add(tony);
    F16 jack;
    usa.add(jack);
    usa.fill();

    F16 igor;
    russia.add(igor);
    F16 andrei;
    russia.add(andrei);
    russia.fill();

    // FIGHT

    usa.fight(russia);
    russia.fight(usa);

    //2nd round
    std::cout << "2nd round: " << std::endl;
    usa.fight(russia); // w/o refill: "You don't have any ammo for fighting."

    usa.fill();
    russia.fill();

    usa.fight(russia);

    return 0;
}