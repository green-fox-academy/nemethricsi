#include <iostream>
#include <fstream>

// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0

int divide(int x);

int main()
{
    double result;

    int userInput;
    std::cout << "Please enter a number: ";
    std::cin >> userInput;

    try {

        result = divide(userInput);

    } catch (std::string &e) {
        std::cout << e << std::endl;
        return -1;
    }

    std::cout << "Your number divided 10 with it is: " << result << std::endl;

    return 0;
}

int divide(int x)
{
    if (x == 0) {
        throw std::string("Can't divide by 0");
    }
    return 10 / x;
}