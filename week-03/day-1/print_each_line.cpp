#include <iostream>
#include <fstream>
#include <string>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, you may use C-programming, although it is not mandatory

int main()
{
    std::ofstream myFile("../my-file.txt");
    std::string names = "Sandor\nJozsef\nBenedek\nJezus\nMaria\n";
    myFile << names;
    myFile.close();


    std::ifstream myFile2("../my-file.txt");

    std::string result;
    if (myFile2.is_open()) {
        while (std::getline(myFile2, result)) {
            std::cout << result << std::endl;
        }
        myFile2.close();
    }

    return 0;
}