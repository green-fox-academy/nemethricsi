#include <iostream>
#include <map>

// How much is the fish?
// What is the most expensive product?
// What is the average price?
// How many products' price is below 300?
// Is there anything we can buy for exactly 125?
// What is the cheapest product?


int main(int argc, char *args[])
{
    std::map<std::string, int> productDatabase = {
            {"Eggs", 200},
            {"Milk", 200},
            {"Fish", 400},
            {"Apples", 150},
            {"Bread", 50},
            {"Chicken", 550}
    };

    return 0;
}