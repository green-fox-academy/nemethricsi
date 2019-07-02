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

int totalCost(std::vector<int> vec);

int biggestExpense(std::vector<int> vec);

int smallestExpense(std::vector<int> vec);

double averageExpenses(std::vector<int> vec);

int main(int argc, char *args[])
{
    std::vector<int> expenses = {500, 1000, 1250, 175, 800, 120};

    std::cout << "Total we spent: " << totalCost(expenses) << std::endl;
    std::cout << "Biggest expense: " << biggestExpense(expenses) << std::endl;
    std::cout << "Smallest expense: " << smallestExpense(expenses) << std::endl;
    std::cout << "Average cost: " << averageExpenses(expenses) << std::endl;

    return 0;
}

int totalCost(std::vector<int> vec)
{
    int cost = 0;
    for (int i = 0; i < vec.size(); i++) {
        cost += vec[i];
    }
    return cost;
}

int biggestExpense(std::vector<int> vec)
{
    int biggest = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (biggest < vec[i]) {
            biggest = vec[i];
        }
    }
    return biggest;
}

int smallestExpense(std::vector<int> vec)
{
    int smallest = vec[0];
    for (int i = 0; i < vec.size(); i++){
        if (smallest > vec[i]) {
            smallest = vec[i];
        }
    }
    return smallest;
}

double averageExpenses(std::vector<int> vec)
{
    double sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum = sum + vec[i];
    }
    return sum / vec.size();
}
