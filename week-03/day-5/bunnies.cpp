#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively
// (without loops or multiplication).

int earsOfTheBunnies(int bunnies)
{
    if (bunnies == 1) {
        return 2;
    } else {
        return earsOfTheBunnies(1) + earsOfTheBunnies(bunnies - 1);
    }

}

int main()
{
    int bunnies = 9;

    std::cout << earsOfTheBunnies(bunnies) << std::endl;

    return 0;
}
