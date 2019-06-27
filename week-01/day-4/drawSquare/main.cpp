#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was

    int userInput;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> userInput;


    for (int i = 0; i <= userInput; ++i) {
        if (i == 0 || i == userInput) {
            std::cout << "%%%%%%" << std::endl;
        } else {
            std::cout << "%    %" << std::endl;
        }
    }

    return 0;
}