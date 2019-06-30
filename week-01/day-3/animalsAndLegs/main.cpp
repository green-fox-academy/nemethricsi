#include <iostream>

int main(int argc, char *args[])
{
    int numberOfChickens;
    std::cout << "Please enter the number of the chickens: ";
    std::cin >> numberOfChickens;

    int numberOfPigs;
    std::cout << "Please enter the number of the pigs: ";
    std::cin >> numberOfPigs;

    int legsOfChickens = numberOfChickens * 2;
    int legsOfPigs = numberOfPigs * 4;
    int allAnimalLegs = legsOfChickens + legsOfPigs;

    std::cout << "So these animals have " << allAnimalLegs << " legs in total!" << std::endl;

    return 0;
}