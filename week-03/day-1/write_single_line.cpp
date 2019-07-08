#include <iostream>
#include <fstream>
#include <string>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main()
{
    std::ofstream myFileToWrite("../my-file.txt", std::ofstream::app);
    if (myFileToWrite.is_open()) {
        std::string str = "\nNemeth Richard";
        myFileToWrite << str;
        myFileToWrite.close();
    }

    return 0;
}