#include <iostream>

int main(int argc, char *args[])
{
    double miles = 0;
    double kms = 0;
    std::cout << "Please enter a distance in mile(s): ";
    std::cin >> miles;

    kms = miles * 1.609344;
    std::cout << miles << " mile(s) is " << kms << " km." << std::endl;

    return 0;
}