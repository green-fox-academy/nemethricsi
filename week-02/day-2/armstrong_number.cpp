#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <cstdlib>


int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter an integer: " << std::endl;
    std::cin >> userInput;

    std::string inputString = std::to_string(userInput);
    std::vector<int> numbers;

    for (int i = 0; i < inputString.length(); ++i) {
        numbers.push_back(inputString[i]);
        std::cout << inputString[i] << std::endl;
    }

    for (int k = 0; k < numbers.size(); ++k) {
        std::cout << numbers[k] << std::endl;
    }

    int power = numbers.size();
    int total = 0;

    for (int j = 0; j < numbers.size(); ++j) {
        total += pow(numbers[j], power);
        std::cout << numbers[j] << std::endl;
    }

    std::cout << total << std::endl;
    if (total == userInput) {
        std::cout << userInput << " is an Armstrong number." << std::endl;
    } else {
        std::cout << userInput << " is not an Armstrong number :(" << std::endl;
    }

    return 0;
}