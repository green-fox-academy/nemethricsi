#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyMyFile(std::string file, std::string copy);

void createCopy(std::string line);

int main()
{
    std::cout << std::boolalpha << copyMyFile("../apples.txt", "../copy.txt") << std::endl;

    return 0;
}

bool copyMyFile(std::string file, std::string copy)
{
    std::fstream myFile(file, std::ios::in);
    std::fstream myFileCopy(copy, std::ios::out);
    std::string str;
    if (myFile.is_open() && myFileCopy.is_open()) {
        while (std::getline(myFile, str)) {
            myFileCopy << str << std::endl;
        }
        myFile.close();
        myFileCopy.close();
        return true;
    }
    return false;
}
