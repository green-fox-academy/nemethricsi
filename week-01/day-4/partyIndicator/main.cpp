#include <iostream>

int main(int argc, char *args[])
{
    int numberOfGirls;
    std::cout << "Please enter the number of girls: ";
    std::cin >> numberOfGirls;

    int numberOfBoys;
    std::cout << "Please enter the number of boys: ";
    std::cin >> numberOfBoys;

    int allThePeople = numberOfBoys + numberOfGirls;

    if (numberOfBoys == numberOfGirls && allThePeople >= 20) {
        std::cout << "The party is excellent!" << std::endl;
    } else if (numberOfBoys != numberOfGirls && allThePeople >= 20) {
        std::cout << "Quite cool party!" << std::endl;
    } else if (allThePeople < 20 && numberOfGirls > 0) {
        std::cout << "Average party..." << std::endl;
    } else if (numberOfGirls < 1) {
        std::cout << "Sausage party..." << std::endl;
    }

    return 0;
}