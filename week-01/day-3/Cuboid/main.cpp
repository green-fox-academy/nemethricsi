#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double l;
    std::cout << "Add the length of the cuboid in cm: " << std::endl;
    std::cin >> l;

    double w;
    std::cout << "Add the width of the cuboid in cm: " << std::endl;
    std::cin >> w;

    double h;
    std::cout << "Add the height of the cuboid in cm: " << std::endl;
    std::cin >> h;

    double tsa = 2 * (l * w + w * h + h * l); //Total Surface Area of the cuboid in cm2
    double v = l * w * h; // Volume of the cuboid in cm3

    std::cout << "Surface Area: " << tsa << " cm2." << std::endl;
    std::cout << "Volume: " << v << " cm3." << std::endl;


    return 0;
}