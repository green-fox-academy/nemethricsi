#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *args[])
{
    // Create an empty list which will contain names (strings)
    std::vector<std::string> myNames;

    // Print out the number of elements in the list
    std::cout << myNames.size() << std::endl;

    // Add William to the list
    myNames.push_back("William");

    // Print out whether the list is empty or not
    std::cout << "Is myNames empty?: " << std::boolalpha << myNames.empty() << std::endl;

    // Add John to the list
    // Add Amanda to the list
    myNames.push_back("John");
    myNames.push_back("Amanda");

    // Print out the number of elements in the list
    std::cout << myNames.size() << std::endl;

    // Print out the 3rd element
    std::cout << myNames[2] << std::endl;

    std::cout << std::endl;

    // Iterate through the list and print out each name
    for (int i = 0; i < myNames.size(); i++) {
        std::cout << myNames[i] << std::endl;
    }

    std::cout << std::endl;

    // Iterate through the list and print
    // 1. William
    // 2. John
    // 3. Amanda
    for (int j = 0; j < myNames.size(); j++) {
        std::cout << j + 1 << ". " << myNames[j] << std::endl;
    }

    std::cout << std::endl;

    // Remove the 2nd element
    myNames.erase(myNames.begin() + 1);

    std::cout << "Second element (John) removed:" << std::endl;
    for (int k = 0; k < myNames.size(); k++) {
        std::cout << myNames[k] << std::endl;
    }

    std::cout << std::endl;

    // Iterate through the list in a reversed order and print out each name
    std::cout << "Reversed list:" << std::endl;
    for (int k = myNames.size() - 1; k >= 0; k--) {
        std::cout << myNames[k] << std::endl;
    }

    // Remove all elements

    myNames.clear();
    std::cout << "Remove all element. Number of vector: ";
    std::cout << myNames.size() << std::endl;

    return 0;
};