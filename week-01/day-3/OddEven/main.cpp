#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;

    if ((userInput % 2) == 0) {
        std::cout << "This number is: Even" << std::endl;
    } else {
        std::cout << "This number is: Odd" << std::endl;
    }

    return 0;
}