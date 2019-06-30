#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    std::string abc [] = {"first", "second", "third"};

    abc[0] = "third";
    abc[2] = "first";

    for (int i = 0; i < sizeof(abc) / sizeof(abc[0]); ++i) {
        std::cout << abc[i] << " ";
    }
    return 0;
}