#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string myName = "Richard";
    int myAge = 34;
    double myHeight = 1.79;
    bool isMarried = false;

    std::cout << "My name is: " << myName << std::endl;
    std::cout << "I am " << myAge << " years old." << std::endl;
    std::cout << "I am " << myHeight << " meters high." << std::endl;

    switch (isMarried) {
        case 0: std::cout << "I'm NOT married." ;
        break;

        case 1: std::cout << "I'm married.";
        break;
    }

    return 0;
}