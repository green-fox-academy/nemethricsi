#include <iostream>
#include "Station.h"
#include "Car.h"
#include <vector>

//  Create Station and Car classes
//
//Station
//
//Members:
//gasAmount
//create a constructor that initializes the gasAmount
//fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station
//Car
//
//Members:
//gasAmount
//capacity
//create constructor for Car with 2 arguments(gasAmount and capacity)
//car has 2 methods:
//isFull() -> returns true if capacity equals to gasAmount, false otherwise
//fill() -> increments the gasAmount by one.
//In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.

int main()
{
    Station Mol;

    std::vector<Car> cars;

    Car trabant("Trabant", 10, 50);
    Car audi("Audi", 0, 70);
    Car fiat("Fiat", 30, 60);
    Car seat("Seat", 2, 65);
    Car mercedes("Mercedes", 15, 80);

    cars.push_back(trabant);
    cars.push_back(audi);
    cars.push_back(fiat);
    cars.push_back(seat);
    cars.push_back(mercedes);

    for (int i = 0; i < cars.size(); ++i) {
        while (!cars[i].isFull()) {
            Mol.fill(cars[i]);
        }
        std::cout << "Filling " + cars[i].getName() + "!" << std::endl;
        std::cout << std::boolalpha << cars[i].getName() + " is full: " << cars[i].isFull() << std::endl;
        std::cout << "The remaining capacity of the station is: " << Mol.getGasAmount() << std::endl;
    }
    return 0;
}