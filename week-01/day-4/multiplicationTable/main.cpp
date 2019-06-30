#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter a number for the multiplication table: ";
    std::cin >> userInput;

    for (int i = 1; i < 11; i++) {
        std::cout << i << " * " << userInput << " = " << i * userInput << std::endl;
    }

    return 0;
}