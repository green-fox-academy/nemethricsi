#include <iostream>

int main(int argc, char* args[]) {

    // Swap the values of the variables
    int a = 123;
    int b = 526;
    int temporary;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    temporary = a;
    a = b;
    b = temporary;

    std::cout << "a and b swapped:" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;

}