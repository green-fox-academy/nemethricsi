#include <iostream>
#include <string>

void greet(std::string anyName);

int main(int argc, char *args[])
{
    std::string al = "Green Fox";

    greet(al);

    return 0;
}

void greet(std::string anyName)
{
    std::cout << "Greetings dear, " << anyName << std::endl;
}