#include <iostream>

void swapWithRef(int &x, int &y);

void swapWithPtr(int *x, int *y);

int main()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "Swap with reference" << std::endl;

    swapWithRef(a, b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "Swap with Pointers" << std::endl;

    swapWithPtr(&a, &b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}

void swapWithRef(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}

void swapWithPtr(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}