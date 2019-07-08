#include <iostream>
#include <fstream>
#include <string>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int lineCount(std::string file);

int main()
{

    std::cout << lineCount("../my-file.txt") << std::endl;


    return 0;
}

int lineCount(std::string file)
{

    std::ifstream myFile(file);
    int linesNumber = 0;
    std::string unused;
    if (myFile.is_open()) {
        while (getline(myFile, unused)) {
            linesNumber++;
        }
        myFile.close();
    }
    return linesNumber;
}