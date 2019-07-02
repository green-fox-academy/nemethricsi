#include <iostream>

// Create a program which first asks for a number
// this number indicates how many integers we want to store in an array
// and than asks for numbers till the user fills the array
// It should print out the biggest number in the given array and the memory address of it

int *arrayMax(int arr[], int n);

int main()
{
    int sizeOfArray = 0;
    std::cout << "Please enter a number: ";
    std::cin >> sizeOfArray;

    int myArray[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << "Please enter an integer: ";
        std::cin >> myArray[i];
    }

    std::cout << "The biggest value in this array is: " << *arrayMax(myArray, sizeOfArray) << ". " << std::endl;
    std::cout << "And the memory address of it is: " << arrayMax(myArray, sizeOfArray) << std::endl;


    return 0;
}

int *arrayMax(int arr[], int n)
{
    int *Ptr = arr;
    for (int i = 0; i < n; i++) {
        if (arr[i] > *Ptr) {
            Ptr = &arr[i];
        }
    }
    return Ptr;
}