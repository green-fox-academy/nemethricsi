#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void writeMeLines(std::string path, std::string word, int n);

int main()
{

    std::string userInput;
    std::cout << "Enter a word: ";
    std::cin >> userInput;

    int userNumber = 1;
    std::cout << "please enter a number: ";
    std::cin >> userNumber;

    writeMeLines("../" + userInput + ".txt", userInput, userNumber);

    return 0;
}

void writeMeLines(std::string path, std::string word, int n)
{
    std::ofstream myFile(path, std::ofstream::app);
    if (myFile.is_open()) {
        for (int i = 0; i < n; ++i) {
            myFile << word << std::endl;
        }
        myFile.close();
    }
}