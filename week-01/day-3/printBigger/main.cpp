#include <iostream>

int main(int argc, char *args[])
{
    int number;
    int number2;
    std::cout << "Please enter two numbers (press Enter after each other): " << std::endl;
    std::cin >> number >> number2;

    if (number > number2) {
        std::cout << "The bigger number is: " << number << std::endl;
    } else if (number < number2) {
        std::cout << "The bigger number is: " << number2 << std::endl;
    } else {
        std::cout << "These two numbers are even." << std::endl;
    }

    return 0;
}
