#include <iostream>

int power(int base, int n)
{

    if (n == 1) {
        return base;
    }
    return base * power(base, n - 1);
}

int main()
{
    std::cout << power(3, 1) << std::endl;

    return 0;
}