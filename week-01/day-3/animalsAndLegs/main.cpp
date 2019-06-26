#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int numberOfChickens;
    std::cout << "Please enter the number of the chickens: " << std::endl;
    std::cin >> numberOfChickens;

    int numberOfPigs;
    std::cout << "Please enter the number of the pigs: " << std::endl;
    std::cin >> numberOfPigs;

    int legsOfChickens = numberOfChickens * 2;
    int legsOfPigs = numberOfPigs * 4;
    int allAnimalLegs = legsOfChickens + legsOfPigs;

    std::cout << "So the animals have " << allAnimalLegs << " legs in total!" << std::endl;

    return 0;
}