#include <iostream>

int findIndex(int arr[], int n, int x);

int main()
{
    // Create a function which takes an array (and it's length) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    int myArray[] = {2, 3, 5, 17, 8, 11};
    int mySize = sizeof(myArray) / sizeof(myArray[0]);

    int userInput;
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;

    int yourIndex = userInput;


    std::cout << "The index of the given value (" << userInput << ") in the array: ";
    std::cout << findIndex(myArray, mySize, yourIndex) << std::endl;

    return 0;
}

int findIndex(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

