#include <iostream>
#include <string>
#include <vector>

void printVector(std::vector<std::string> vec);

int main (int argc, char *args[])
{

    std::vector<std::string> listA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};


    // Create a new list ('List B') with the values of List A
    std::vector<std::string> listB;
    for (int i = 0; i < listA.size(); i++) {
        listB.push_back(listA[i]);
    }

    printVector(listB);

    // Print out whether List A contains Durian or not
    for (int j = 0; j < listA.size(); j++){
        if(listA[j] == "Durian"){
            std::cout << "Yes, listA contains Durian." << std::endl;
        }
    }

    // Remove Durian from List B
    listB.erase(listB.begin() + 3);
    printVector(listB);

    // Add Kiwifruit to List A after the 4th element
    listA.insert(listA.begin() + 4, "KIWIFRUIT");
    printVector(listA);

    // Compare the size of List A and List B

    if(listA.size() > listB.size()){
        std::cout << "Size of List A is bigger." << std::endl;
    } else if (listA.size() < listB.size()){
        std::cout << "Size of List A is bigger." << std::endl;
    } else {
        std::cout << "Size of List A and size of List B is the same" << std::endl;
    }

    // Get the index of Avocado from List A
    for (int k = 0; k < listA.size(); ++k) {
        if(listA[k] == "Avocado"){
            std::cout << k << std::endl;
        }
    }

    // Get the index of Durian from List B
    for (int l = 0; l < listB.size(); ++l) {
        if(listB[l] == "Durian"){
            std::cout << l << std::endl;
        }
    }

    // Add Passion Fruit and Pomelo to List B in a single statement
    listB.insert(listB.end(), {"Passion Fruit", "Pomelo"});
    printVector(listB);

    // Print out the 3rd element from List A
    std::cout << listA[2] << std::endl;


    return 0;
}

void printVector(std::vector<std::string> vec)
{
    for (int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " " << std::endl;
    }
    std::cout << std::endl;
}
