#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter a number: ";
    std::cin >> userInput;

    for (int i = 0; i <= userInput - 1; i++) {
        for (int j = 0; j <= userInput - i - 1; j++) {
            std::cout << " ";
        }
        for (int k = 0; k < userInput + i - (userInput - i - 1); k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}