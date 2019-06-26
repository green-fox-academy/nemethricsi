#include <iostream>

int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / (heightInM * heightInM);

    // Print the Body Mass Index (BMI) based on these values

    std::cout << "Mass: " << massInKg << std::endl;
    std::cout << "Height: " << heightInM << std::endl;
    std::cout << "BMI: " << bmi << std::endl;

    return 0;
}