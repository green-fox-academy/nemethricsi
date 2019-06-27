#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was
    int userInput;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> userInput;
    int n = userInput / 2;

    for (int i = 0; i < userInput; ++i) {
        if (i < (userInput + 1) / 2) {
            for (int j = 0; j <= n - i - 4; ++j) {
                std::cout << " ";
            }
            for (int k = 0; k < n + i - (n - i - 4) - 3; ++k) {
                std::cout << "*";
            }
            std::cout << std::endl;
        } else {
            for (int l = 0; l <= n + i - 10; ++l) {
                std::cout << " ";
            }
            for (int m = 0; m < n - i - (n + i - 10) + 3; ++m) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}