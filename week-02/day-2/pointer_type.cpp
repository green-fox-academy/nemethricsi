#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << "The memory address of 'a': " << &a << std::endl;
    std::cout << "The memory address of 'b': " << &b << std::endl;
    std::cout << "The memory address of 'name': " << &name << std::endl;
    std::cout << "The value of pointer aPtr: " << aPtr << std::endl;
    std::cout << "The value of pointer bPtr: " << bPtr << std::endl;
    std::cout << "The value of pointer namePtr: " << namePtr << std::endl;

    return 0;
}