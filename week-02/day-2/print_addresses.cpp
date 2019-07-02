#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int userInputArray[5];
    int *arrPtr = userInputArray;

    for (int i = 0; i < 5;
    i++){
        std::cout << "Please enter an integer: ";
        std::cin >> userInputArray[i];
    }


    std::cout << "The memory addresses of the array: " << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << &userInputArray[j] << std::endl;
    }

    std::cout << "The memory addresses of the array with pointer: " << std::endl;
    for (int k = 0; k < 5; k++) {
        std::cout << arrPtr + k << std::endl;
    }

    return 0;
}