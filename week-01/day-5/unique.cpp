#include <iostream>
#include <string>

int unique(int arr[], int n);

int main(int argc, char *args[])
{
    int listOfNumbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int sizeOfArray = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);

    sizeOfArray = unique(listOfNumbers, sizeOfArray);

    std::cout << sizeOfArray << std::endl;

    for (int i = 0; i < sizeOfArray; ++i) {
        std::cout << listOfNumbers[i] << " ";
    }
    return 0;
}

int unique(int arr[], int n)
{
    if (n == 0 || n == 1) {
        return n;
    }

    int tempArray[n];
    int j = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] != arr[i + 1]) {
            tempArray[j++] = arr[i];
        }
    }
    tempArray[j++] = arr[n - 1];

    for (int i = 0; i < j; i++) {
        arr[i] = tempArray[i];
    }
    return j;
}
