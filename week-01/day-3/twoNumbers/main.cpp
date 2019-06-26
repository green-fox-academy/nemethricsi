#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that prints a few operations on two numbers: 22 and 13
    int a = 22;
    int b = 13;

    // Print the result of 13 added to 22
    std::cout << "the result of 13 added to 22: " << b + a << std::endl;

    // Print the result of 13 substracted from 22
    std::cout << "the result of 13 substracted from 22: " << a - b << std::endl;

    // Print the result of 22 multiplied by 13
    std::cout << "the result of 22 multiplied by 13: " << b * a << std::endl;

    // Print the result of 22 divided by 13 (as a decimal fraction
    std::cout << "the result of 22 divided by 13 (as a decimal fraction): " << static_cast<float>(a) / static_cast<float>(b) << std::endl;

    // Print the integer part of 22 divided by 13
    std::cout << "the integer part of 22 divided by 13: " << a / b << std::endl;

    // Print the remainder of 22 divided by 13
    std::cout << "the remainder of 22 divided by 13: " << a % b << std::endl;


    return 0;
}