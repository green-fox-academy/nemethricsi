#include <iostream>

// Sum Digits
//Given a non-negative integer n, return the sum of its digits recursively (without loops).
//
//Hint
//Mod (%) by 10 yields the rightmost digit (e.g. 126 % 10 is 6)
//
//Java, C++, C#, Python
//Divide (/) by 10 removes the rightmost digit (e.g. 126 / 10 is 12).
//
//JavaScript, TypeScript
//There is no integer type in JavaScript. To remove the rightmost digit you must divide (/) the number by 10 and find a way to get the the whole number portion of that number.

int sumOfDigits(int n);

int main()
{
    std::cout << sumOfDigits(5) << std::endl;

    return 0;
}

int sumOfDigits(int n)
{
    if (n == 0) {
        return 0;
    } else {
        return sumOfDigits(n / 10) + (n % 10);
    }
}

