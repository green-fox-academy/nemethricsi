#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a, b, c, d, e;
    std::cout << "Please enter 5 integers (press Enter after each of them): " << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    int sum = a + b + c + d + e;
    float avg = static_cast<float>(sum) / 5;

    std::cout << "The sum of the above five numbers is: " << sum << std::endl;
    std::cout << "The Average of the above five numbers is: " << avg << std::endl;

    return 0;
}