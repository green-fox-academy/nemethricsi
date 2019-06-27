#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int userInput;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> userInput;

    for (int i = 0; i <= userInput-1 ; ++i) {
        for (int j = 0; j <= userInput - i - 1; ++j) {
            std::cout << " ";
        }
        for (int k = 0; k < userInput + i - (userInput - i - 1); k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}