#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int fromOneToN(int n);

int main()
{

    std::cout << fromOneToN(10) << std::endl;

    return 0;
}

int fromOneToN(int n)
{
    if (n == 1) {
        return 1;
    } else {
        return n + fromOneToN(n - 1);
    }
}