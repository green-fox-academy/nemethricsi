#include <iostream>

int main(int argc, char *args[])
{
    int a = 22;
    int b = 13;

    std::cout << "the result of 13 added to 22: " << b + a << std::endl;

    std::cout << "the result of 13 substracted from 22: " << a - b << std::endl;

    std::cout << "the result of 22 multiplied by 13: " << b * a << std::endl;

    std::cout << "the result of 22 divided by 13 (as a decimal fraction): "
              << static_cast<float>(a) / static_cast<float>(b) << std::endl;

    std::cout << "the integer part of 22 divided by 13: " << a / b << std::endl;

    std::cout << "the remainder of 22 divided by 13: " << a % b << std::endl;

    return 0;
}