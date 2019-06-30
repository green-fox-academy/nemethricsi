#include <iostream>
#include <string>

int doubling(int number);

int main(int argc, char *args[])
{
    int baseNum = 123;

    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int number)
{
    return number * 2;
}