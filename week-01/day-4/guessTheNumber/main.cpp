#include <iostream>

int main(int argc, char *args[])
{
    int theNumber = 10;
    int userInput = 0;
    bool gameOver = false;

    do {
        std::cout << "Please enter a number: ";
        std::cin >> userInput;

        if (userInput < theNumber) {
            std::cout << "The stored number is higher." << std::endl;
        } else if (userInput > theNumber) {
            std::cout << "The stored number is lower." << std::endl;
        } else {
            std::cout << "You found the number: " << theNumber << std::endl;
            gameOver = true;
        }

    } while (!gameOver);

    return 0;
}