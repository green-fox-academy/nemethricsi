#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int userInputArray[5];
    int *arrPtr = userInputArray;

    for (int i = 0; i < 5;
    i++){
        std::cout << "Please enter an integer: ";
        std::cin >> userInputArray[i];
    }

    std::cout << "The values of the array using pointers: " << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << *(arrPtr + j) << std::endl;
    }

    return 0;
}