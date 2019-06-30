#include <iostream>

int main(int argc, char *args[])
{
    int userInput;
    std::cout << "Please enter a number: ";
    std::cin >> userInput;

    for (int i = 0; i <= userInput; ++i) {
        if (i == 0 || i == userInput) {
            std::cout << "% % % % % %" << std::endl;
        } else {
            std::cout << "%         %" << std::endl;
        }
    }
    return 0;
}