#include <iostream>
#include "Flyable.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Helicopter.h"
#include "Bird.h"

int main()
{
    Helicopter kekVillam(3, 140, "blue");
    kekVillam.takeOff();
    kekVillam.fly();
    kekVillam.land();

    Bird eagle("Solyom", 1000);
    eagle.takeOff();
    eagle.fly();
    eagle.land();

    return 0;
}