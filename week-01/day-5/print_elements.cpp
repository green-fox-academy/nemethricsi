#include <iostream>
#include <string>


int main(int argc, char *args[])
{
    int numbers[] = {4, 5, 6, 7};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) {
        std::cout << numbers[i] << std::endl;
    }
    return 0;
}