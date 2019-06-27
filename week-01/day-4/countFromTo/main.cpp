#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    int firstNumber;
    int secondNumber;

    std::cout << "Please enter two numbers (press Enter after each other): " << std::endl;
    std::cin >> firstNumber;
    std::cin >> secondNumber;

    if (secondNumber <= firstNumber){
        std::cout << "The second number should be bigger (than the first number)!" << std::endl;
    } else {
        for (int i = firstNumber; i < secondNumber; i++){
            std::cout << i << std::endl;
        }
    }
    return 0;
}