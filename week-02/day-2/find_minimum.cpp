#include <iostream>


int *arrayMin(int arr[], int n);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int numOfElements = sizeof(numbers) / sizeof(numbers[0]);
    int result;

    std::cout << "The memory address of numbers[5]: " << &numbers[5] << std::endl;
    std::cout << "The smallest element of this array is: " << arrayMin(numbers, numOfElements) << std::endl;
    std::cout << "VALUE: " << *arrayMin(numbers, numOfElements) << std::endl;

    return 0;
}

int *arrayMin(int arr[], int n)
{
    int *smPtr = &arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < *smPtr) {
            smPtr = &arr[i];
        }
    }
    return smPtr;
}