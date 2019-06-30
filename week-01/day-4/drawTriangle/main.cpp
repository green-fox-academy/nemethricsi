#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter a number: ";
    std::cin >> userInput;

    for (int i = 1; i <= userInput; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}