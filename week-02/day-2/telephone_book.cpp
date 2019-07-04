#include <iostream>
#include <map>

// Create an application which solves the following problems.
//
//  What is John K. Miller's phone number?
//  Whose phone number is 307-687-2982?
//  Do we know Chris E. Myers' phone number?

void tellMeTheNumber(std::map<std::string, std::string> myMap, std::string name);

void tellMeTheName(std::map<std::string, std::string> myMap, std::string number);

void doWeKnowTheNumber(std::map<std::string, std::string> myMap, std::string name);

int main(int argc, char *args[])
{
    std::map<std::string, std::string> phonebook = {
            {"William A. Lathan",   "405-709-1865"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}
    };

    tellMeTheNumber(phonebook, "John K. Miller");

    tellMeTheName(phonebook, "307-687-2982");

    std::cout << std::endl;

    doWeKnowTheNumber(phonebook, "Chris E. Myers");

    return 0;
}

void tellMeTheNumber(std::map<std::string, std::string> myMap, std::string name)
{
    std::cout << name << "'s number is: " << myMap[name] << std::endl;
}

void tellMeTheName(std::map<std::string, std::string> myMap, std::string number)
{
    std::map<std::string, std::string>::iterator it;

    for (it = myMap.begin(); it != myMap.end(); it++) {
        if (number == it->second)
            std::cout << "The number " << number << " belongs to " << it->first << std::endl;
    }
}

void doWeKnowTheNumber(std::map<std::string, std::string> myMap, std::string name)
{
    std::cout << "Do we know the number of " << name << " ?" << std::endl;

    if (myMap.find(name) == myMap.end()) {
        std::cout << "No, we don't know " << name << "'s number." << std::endl;
    } else {
        std::cout << "Yes, we know: " << std::endl;
        tellMeTheNumber(myMap, name);
    }
}