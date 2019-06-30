#include <iostream>
#include <string>


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
    int temp = num;
    num = num2;
    num2 = temp;
}

/* WITHOUT TEMP VAR:
*  x = x + y
*  y = x - y
*  x = x - y
*/
