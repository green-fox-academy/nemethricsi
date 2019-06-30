#include <iostream>
#include <string>


int main(int argc, char *args[])
{
    int t[] = {1, 2, 3, 4, 5};
    t[2]++;
    std::cout << t[2] << std::endl;

    return 0;
}