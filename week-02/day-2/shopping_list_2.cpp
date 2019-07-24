#include <iostream>
#include <map>

double howMuchIsItAll(std::map<std::string, double> prices, std::map<std::string, int> toBuyMap);

std::string whoBuysMoreRice(std::map<std::string, int> bob, std::map<std::string, int> alice, std::string product);

std::string whoBuysMoreDiffStuff(std::map<std::string, int> bob, std::map<std::string, int> alice);

std::string whoBuysMoreProducts(std::map<std::string, int> bob, std::map<std::string, int> alice);

int addNumberOfListItems(std::map<std::string, int> map);

std::string whichOneIsBigger(int bob, int alice);

int main(int argc, char *args[])
{
    std::map<std::string, double> products = {
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10},
    };
    std::map<std::string, int> listBob = {
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1},
    };
    std::map<std::string, int> listAlice = {
            {"Rice",            1},
            {"Eggs",            5},
            {"Chicken Breasts", 2},
            {"Apples",          1},
            {"Tomato",          10}
    };

    // How much does Bob pay?
    std::cout << "Bob will pay " << howMuchIsItAll(products, listBob) << " in total." << std::endl;
    //How much does Alice pay?
    std::cout << "Alice will pay " << howMuchIsItAll(products, listAlice) << " in total." << std::endl;
    // Who buys more Rice?
    std::cout << "Who buys more Rice? " << whoBuysMoreRice(listBob, listAlice, "Rice") << std::endl;
    // Who buys more Potato?
    std::cout << "Who buys more Potato? " << whoBuysMoreRice(listBob, listAlice, "Potato") << std::endl;
    // Who buys more different products?
    std::cout << "Who buys more different products? " << whoBuysMoreDiffStuff(listBob, listAlice) << std::endl;
    // Who buys more products? (piece)
    std::cout << "Who buys more products? " << whoBuysMoreProducts(listBob, listAlice) << std::endl;

    return 0;
}

double howMuchIsItAll(std::map<std::string, double> prices, std::map<std::string, int> toBuyMap)
{
    double total = 0;
    for (auto item : toBuyMap) {
        total += prices[item.first] * item.second;
    }
    return total;
}

std::string whoBuysMoreRice(std::map<std::string, int> bob, std::map<std::string, int> alice, std::string product)
{
    return whichOneIsBigger(bob[product], alice[product]);
}

std::string whoBuysMoreDiffStuff(std::map<std::string, int> bob, std::map<std::string, int> alice)
{
    int counterBob = 0;
    int counterAlice = 0;
    for (auto item : bob) {
        counterBob++;
    }
    for (auto item : alice) {
        counterAlice++;
    }
    return whichOneIsBigger(counterBob, counterAlice);
}

std::string whoBuysMoreProducts(std::map<std::string, int> bob, std::map<std::string, int> alice)
{
    int itemsBob = addNumberOfListItems(bob);
    int itemsAlice = addNumberOfListItems(alice);

    return whichOneIsBigger(itemsBob, itemsAlice);
}

int addNumberOfListItems(std::map<std::string, int> map)
{
    int items = 0;
    for (auto item : map) {
        items += item.second;
    }
    return items;
}

std::string whichOneIsBigger(int bob, int alice)
{
    if (bob > alice) {
        return "Bob";
    } else if (bob < alice) {
        return "Alice";
    } else {
        return "They have the same result";
    }
}
