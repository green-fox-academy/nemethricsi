#include <iostream>
#include <string>

std::string appendAFunc(std::string anyWord);

int main(int argc, char *args[])
{
    std::string typo = "Chinchill";

    std::cout << appendAFunc(typo) << std::endl;

    return 0;
}

std::string appendAFunc(std::string anyWord)
{
    return anyWord + "a";
}