#include <iostream>
#include <string>

int sum(int num);

int main(int argc, char *args[])
{

    int userInput;
    std::cout << "Please enter an integer and I will return the sum of numbers from zero until your given number:" << std::endl;
    std::cin >> userInput;
    std::cout << "The sum of numbers from 0 until " << userInput << " is: " << sum(userInput) << std::endl;

    return 0;
}

int sum(int num)
{
    int temp = 0;
    for (int i = 0; i <= num; ++i) {
        temp = temp + i;
    }
    return temp;

}
