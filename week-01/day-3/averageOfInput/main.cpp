#include <iostream>

int main(int argc, char *args[])
{
    int a, b, c, d, e;
    std::cout << "Please enter 5 integers (press Enter after each of them): " << std::endl;
    std::cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;
    float avg = static_cast<float>(sum) / 5;

    std::cout << "The sum of the above five numbers is: " << sum << std::endl;
    std::cout << "The average of the above five numbers is: " << avg << std::endl;

    return 0;
}