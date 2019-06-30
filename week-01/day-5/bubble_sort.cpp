#include <iostream>
#include <string>

//  Create a function that takes a list of numbers as parameter
//  Don't forget you have to pass the size of the list as a parameter as well
//  Returns a list where the elements are sorted in ascending numerical order by using bubble sort
//  Make a second boolean parameter, if it's `true` sort that list descending

void bubbleSort(int arr[], int n);

void printArray(int arr[], int n);

int main(int argc, char *args[])
{

    int myArray[] = {100, 12, 76, 11, 9, 5, 4, 3, 2};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);

    printArray(myArray, numberOfElements);

    bubbleSort(myArray, numberOfElements);

    std::cout << std::endl;

    printArray(myArray, numberOfElements);

    return 0;
}

void bubbleSort(int arr[], int n)
{
    int temp = 0;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (arr[n - 2] > arr[n - 1]) {
            temp = arr[n - 2];
            arr[n - 2] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}
