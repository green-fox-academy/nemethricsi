#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    int numList[] = {3, 4, 5, 6, 7};

    for (int i = 0; i < sizeof(numList) / sizeof(numList[0]); ++i) {
        numList[i] = numList[i] * 2;
    }

    for (int j = 0; j < sizeof(numList) / sizeof(numList[0]); ++j) {
        std::cout << numList[j] << std::endl;
    }
    return 0;
}