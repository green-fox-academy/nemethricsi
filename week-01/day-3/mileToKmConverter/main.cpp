#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it

    double miles;
    double kms;
    std::cout << "Please enter a distance in mile(s): " << std::endl;
    std::cin >> miles;

    kms = miles * 1.609344;
    std::cout << miles << " mile(s) is " << kms << " km." << std::endl;

    return 0;
}