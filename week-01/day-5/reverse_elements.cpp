#include <iostream>
#include <string>

void print(int arr[], int n);

void reverse(int arr[], int n);

int main(int argc, char *args[])
{
    int aj[] = {3, 4, 5, 6, 7};
    int sizeOfAj = sizeof(aj) / sizeof(aj[0]);

    std::cout << "Elements of the array: " << std::endl;
    print(aj, sizeOfAj);

    reverse(aj, sizeOfAj);

    std::cout << std::endl;
    std::cout << "Elements of the REVERSED array: " << std::endl;
    print(aj, sizeOfAj);

    return 0;
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}

void reverse(int arr[], int n)
{
    int tempArray[n];

    for (int i = 0; i < n; ++i) {
        tempArray[n - 1 - i] = arr[i];
    }

    for (int j = 0; j < n; ++j) {
        arr[j] = tempArray[j];
    }
}