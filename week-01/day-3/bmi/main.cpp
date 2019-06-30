#include <iostream>

int main(int argc, char *args[])
{
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / (heightInM * heightInM);

    std::cout << "Mass(kg): " << massInKg << std::endl;
    std::cout << "Height(m): " << heightInM << std::endl;
    std::cout << "BMI: " << bmi << std::endl;

    return 0;
}