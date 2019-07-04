#include <iostream>
#include <vector>

// Create an application which solves the following problems.
//  Do we have milk on the list?
//  Do we have bananas on the list?

void doWeHaveOnTheList(std::vector<std::string> vec, std::string goods);

int main(int argc, char *args[])
{
    std::vector<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    doWeHaveOnTheList(shoppingList, "milk");

    doWeHaveOnTheList(shoppingList, "bananas");

    return 0;
}

void doWeHaveOnTheList(std::vector<std::string> vec, std::string goods)
{

    for (unsigned int i = 0; i < vec.size(); i++) {
        if (vec[i] == goods) {
            std::cout << "Yes, we have " << goods << " on the shopping list." << std::endl;
        }
    }

    if (std::find(vec.begin(), vec.end(), goods) == vec.end()) {
        std::cout << "No, we don't have " << goods << " on the shopping list." << std::endl;
    }
    std::cout << std::endl;
}