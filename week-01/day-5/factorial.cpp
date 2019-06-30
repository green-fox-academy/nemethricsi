#include <iostream>
#include <string>


int factorio(int num, int &num2);

int main(int argc, char *args[])
{
    int userInput = 0;
    int result = 1;
    std::cout << "Please enter a number: ";
    std::cin >> userInput;

    factorio(userInput, result);

    std::cout << "The factorial of " << userInput << " is " << result << std::endl;

    return 0;
}

int factorio(int num, int &num2)
{
    for (int i = 1; i <= num; ++i) {
        num2 = num2 * i;
    }
    return num2;
}
