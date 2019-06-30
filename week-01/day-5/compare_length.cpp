#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    int p1[] = {1, 2, 3};
    int p2[] = {4, 5};

    if (sizeof(p1) / sizeof(p1[0]) > sizeof(p2) / sizeof(p2[0])) {
        std::cout << "p1 is longer" << std::endl;
    } else if (sizeof(p1) / sizeof(p1[0]) < sizeof(p2) / sizeof(p2[0])) {
        std::cout << "p2 is longer" << std::endl;
    } else {
        std::cout << "p2 and p1 have the same number of elements." << std::endl;
    }
    return 0;
}
