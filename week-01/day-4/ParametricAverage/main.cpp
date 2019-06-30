#include <iostream>

int main(int argc, char *args[])
{
    int sum = 0;

    int numberOfElements = 0;
    std::cout << "Please enter a number: ";
    std::cin >> numberOfElements;

    int listOfNumbers[numberOfElements];

    for (int i = 0; i < numberOfElements; ++i) {
        std::cout << "Please enter an integer: ";
        std::cin >> listOfNumbers[i];
    }

    for (int j = 0; j < numberOfElements; ++j) {
        sum = sum + listOfNumbers[j];
    }

    std::cout << "The SUM of the above numbers is: " << sum << std::endl;
    std::cout << "The AVERAGE of the above numbers is: " << static_cast<float>(sum) / numberOfElements << std::endl;

    return 0;
}