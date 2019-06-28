#include <iostream>
#include <string>

// - Create an array variable named `t`
//    with the following content: `[1, 2, 3, 4, 5]`
// - Increment the third element
// - Print the third element

int main(int argc, char *args[])
{

    int t[] = {1, 2, 3, 4, 5};
    t[2]++;
    std::cout << t[2] << std::endl;

    return 0;
}