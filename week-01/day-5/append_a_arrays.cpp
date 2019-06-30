#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    std::string animals [] = {"koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i) {
        animals[i] = animals[i] + "a";
    }

    for (int j = 0; j < sizeof(animals) / sizeof(animals[0]); ++j) {
        std::cout << animals[j] << std::endl;
    }
    return 0;
}
