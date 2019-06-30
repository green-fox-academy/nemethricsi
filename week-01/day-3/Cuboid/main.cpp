#include <iostream>

int main(int argc, char *args[])
{
    double l;
    std::cout << "Add the length of the cuboid in cm: ";
    std::cin >> l;

    double w;
    std::cout << "Add the width of the cuboid in cm: ";
    std::cin >> w;

    double h;
    std::cout << "Add the height of the cuboid in cm: ";
    std::cin >> h;

    double tsa = 2 * (l * w + w * h + h * l); //Total Surface Area of the cuboid in cm2
    double v = l * w * h; // Volume of the cuboid in cm3

    std::cout << "The surface area of your cuboid is: " << tsa << " cm2." << std::endl;
    std::cout << "The Volume of your cuboid is: " << v << " cm3." << std::endl;

    return 0;
}