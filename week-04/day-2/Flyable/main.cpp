#include <iostream>
#include "Flyable.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Helicopter.h"
#include "Bird.h"

int main()
{
    Helicopter kekVillam(3, 140, "blue", "Helicopter");
    std::cout << kekVillam.introduce() << std::endl;

    Bird eagle("Solyom", 1000, "Bird");
    std::cout << eagle.introduce() << std::endl;

    return 0;
}