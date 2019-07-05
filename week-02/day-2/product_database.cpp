#include <iostream>
#include <map>

// How much is the fish?
// What is the most expensive product?
// What is the average price?
// How many products' price is below 300?
// Is there anything we can buy for exactly 125?
// What is the cheapest product?

void howMuchIsthat(std::map<std::string, int> map, std::string);

std::pair<std::string, int> whatIsTheMostExpensive(std::map<std::string, int> map);

float showAvgPrice(std::map<std::string, int> map);

int howManyIsBelow(std::map<std::string, int> map, int price);

bool isThereAnythingWithPrice(std::map<std::string, int> map, int price);

int main(int argc, char *args[])
{
    std::map<std::string, int> productDatabase = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };

    howMuchIsthat(productDatabase, "Fish");

    std::cout << "The most expensive product is: " << whatIsTheMostExpensive(productDatabase).first << std::endl;

    std::cout << "The average price in the database is: " << showAvgPrice(productDatabase) << " potatoes." << std::endl;

    std::cout << "There are " << howManyIsBelow(productDatabase, 300) << " products which are below 300." << std::endl;

    std::cout << "Is there anything with for 125 potatoes? " << std::boolalpha << isThereAnythingWithPrice(productDatabase, 125) << std::endl;

    std::cout << "Richard Nemeth" << std::endl;


    return 0;
}

void howMuchIsthat(std::map<std::string, int> map, std::string product)
{
    std::cout << "The price of the " << product << " is " << map[product] << std::endl;
}

std::pair<std::string, int> whatIsTheMostExpensive(std::map<std::string, int> map)
{
    std::map<std::string, int>::iterator it;
    std::pair<std::string, int> p = *map.begin(); //dereference

    for (it = map.begin(); it != map.end(); it++) {
        if (p.second < it->second) {
            p = *it;
        }
    }
    return p;
}

float showAvgPrice(std::map<std::string, int> map){

    int total = 0;

    for(auto data : map){
        total += data.second;
    }
    return total / static_cast<float>(map.size());

}

int howManyIsBelow(std::map<std::string, int> map, int price){

    int counter = 0;

    for(auto data : map){
        if(data.second < price){
            counter++;
        }
    }
    return counter;
}

bool isThereAnythingWithPrice(std::map<std::string, int> map, int price){
    for(auto data : map){
        if(data.second == price)
            return true;
    }
    return false;
}
