#include <iostream>
#include <map>
#include <vector>

std::vector<std::string> whatCostsLessThan201(std::map<std::string, int> map);

std::map<std::string, int> whatCostsMoreThan150(std::map<std::string, int> products);

int main(int argc, char *args[])
{
    std::map<std::string, int> products = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };

    std::vector<std::string> cheapThings = whatCostsLessThan201(products);

    std::cout << "products cost less than 201: " << std::endl;
    for (int i = 0; i < cheapThings.size(); ++i) {
        std::cout << cheapThings[i] << std::endl;
    }

    std::map<std::string, int> expensiveThings = whatCostsMoreThan150(products);
    std::cout << "These products are more expensive than 150: " << std::endl;
    for (auto product : expensiveThings) {
        std::cout << product.first << ": " << product.second << std::endl;
    }
}

std::vector<std::string> whatCostsLessThan201(std::map<std::string, int> map)
{

    std::vector<std::string> productsLessThan201;
    for (auto data : map) {
        if (data.second < 201) {
            productsLessThan201.push_back(data.first);
        }
    }
    return productsLessThan201;
}

std::map<std::string, int> whatCostsMoreThan150(std::map<std::string, int> products)
{

    std::map<std::string, int> moreExpProducts;
    for (auto data : products) {
        if (data.second > 150) {
            moreExpProducts.insert(std::make_pair(data.first, data.second));
        }
    }
    return moreExpProducts;
}