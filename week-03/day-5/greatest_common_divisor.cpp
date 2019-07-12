#include <iostream>

// Find the greatest common divisor of two numbers using recursion.


// Euclid's algorithm
int gcd(int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }

}

int main()
{

    int a = 54;
    int b = 24;

    std::cout << "The greatest common divisor of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    return 0;
}