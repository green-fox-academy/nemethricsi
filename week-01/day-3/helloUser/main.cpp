#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user.

    std::string firstName;
    std::cout << "Please enter your first name: "  << std::endl;
    std::cin >> firstName;
    std::cout << "Hello " << firstName << "!" << std::endl;

    return 0;
}