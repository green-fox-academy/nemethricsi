#include <iostream>

#include "fleet.h"

int main(int argc, char *args[])
{
    Fleet fleet;
    //   You have the `Thing` class
    // - You have the `Fleet` class
    // - You have the `FleetOfThings` class with a `main` method
    // - Download those, use those
    // - In the main method create a fleet
    // - Achieve this output:
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    Thing getMilk("Get milk");
    Thing remove("Remove the obstacles");
    Thing standUp("Stand up");
    standUp.complete();
    Thing eatLunch("Eat lunch");
    eatLunch.complete();

    fleet.add(getMilk);
    fleet.add(remove);
    fleet.add(standUp);
    fleet.add(eatLunch);

    std::cout << fleet.toString() << std::endl;
    return 0;
}