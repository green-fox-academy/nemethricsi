#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;

    if (userInput <= 0) {
        std::cout << "Not enough";
    } else if (userInput == 1) {
        std::cout << "One";
    } else if (userInput == 2) {
        std::cout << "Two";
    } else {
        std::cout << "A lot";
    }

    return 0;
}
