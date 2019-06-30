#include <iostream>

int main(int argc, char *args[])
{
    int firstNumber;
    int secondNumber;

    std::cout << "Please enter two numbers (press Enter after each other): " << std::endl;
    std::cin >> firstNumber >> secondNumber;

    if (secondNumber <= firstNumber) {
        std::cout << "The second number should be bigger (than the first number)!" << std::endl;
    } else {
        for (int i = firstNumber; i < secondNumber; i++) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}