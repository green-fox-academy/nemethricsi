#include <iostream>
#include <string>


void bubbleSort(int arr[], int n);

void printArray(int arr[], int n);

int main(int argc, char *args[])
{

    int myArray[] = {100, 14, 76, 1, 5, 2, 12, 3};
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
        std::cout << arr[i] << ", ";
    }
}
