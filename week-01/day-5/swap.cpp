#include <iostream>
#include <string>

// Create two integer variables: a=15, b=23
// Create a function named swap that gets the 2 integers as parameters and swaps its values.
// Print the values before and after the function call and make sure the values are printed in reversed order.

void swap(int &num, int &num2);

int main(int argc, char *args[])
{

    int a = 15;
    int b = 23;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);

    std::cout << "The reversed values of the variables:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;


    return 0;
}

void swap(int &num, int &num2)
{
    int temp = 0;
    temp = num;
    num = num2;
    num2 = temp;
}

