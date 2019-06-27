#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int theNumber = 10;
    int userInput;
    bool gameOver = false;

    do {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> userInput;

        if (userInput < theNumber){
            std::cout << "The stored number is higher." << std::endl;
        } else if (userInput > theNumber) {
            std::cout << "The stored number is lower." << std::endl;
        } else {
            std::cout << "You found the number: " << theNumber << std::endl;
            gameOver = true;
        }

    } while(!gameOver);

    return 0;
}