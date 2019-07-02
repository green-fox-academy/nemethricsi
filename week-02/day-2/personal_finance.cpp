#include <iostream>
#include <vector>

// We are going to represent our expenses in a list containing integers.
//
// Create a list with the following items.
// 500, 1000, 1250, 175, 800 and 120
// Create an application which solves the following problems.
// How much did we spend?
// Which was our greatest expense?
// Which was our cheapest spending?
// What was the average amount of our spendings?

int calcTotalCost(std::vector<int> vec);

int showBiggestExpense(std::vector<int> vec);

int showSmallestExpense(std::vector<int> vec);

double calcAverageCost(std::vector<int> vec);

int main(int argc, char *args[])
{
    std::vector<int> expenses = {500, 1000, 1250, 175, 800, 120};

    std::cout << "Total we spent: " << calcTotalCost(expenses) << std::endl;
    std::cout << "Biggest expense: " << showBiggestExpense(expenses) << std::endl;
    std::cout << "Smallest expense: " << showSmallestExpense(expenses) << std::endl;
    std::cout << "Average cost: " << calcAverageCost(expenses) << std::endl;

    return 0;
}

int calcTotalCost(std::vector<int> vec)
{
    int cost = 0;
    for (int i = 0; i < vec.size(); i++) {
        cost += vec[i];
    }
    return cost;
}

int showBiggestExpense(std::vector<int> vec)
{
    int biggest = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (biggest < vec[i]) {
            biggest = vec[i];
        }
    }
    return biggest;
}

int showSmallestExpense(std::vector<int> vec)
{
    int smallest = vec[0];
    for (int i = 1; i < vec.size(); i++){
        if (smallest > vec[i]) {
            smallest = vec[i];
        }
    }
    return smallest;
}

double calcAverageCost(std::vector<int> vec)
{
    return calcTotalCost(vec) / static_cast<double>(vec.size());
}
