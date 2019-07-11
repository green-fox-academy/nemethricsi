#include <iostream>

#include "DiceSet.h"

int main(int argc, char *args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;

    diceSet.roll();

    std::vector<int> current = diceSet.getCurrent();
    int counter;

    for (int i = 0; i < current.size(); ++i) {
        while (diceSet.getCurrent(i) != 6) {
            diceSet.roll(i);
            counter++;
        }
    }

    for (int j = 0; j < diceSet.getCurrent().size(); ++j) {
        std::cout << diceSet.getCurrent()[j] << std::endl;
    }

    std::cout << "we need to roll " << counter << " times to get all the dices 6." << std::endl;

    return 0;
}
