#include <iostream>
#include <string>

// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.

int factorio (int num, int &num2);

int main(int argc, char* args[]) {

    int userInput = 0;
    int result = 1;
    std::cout << "Please enter a number: " << std::endl;
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
