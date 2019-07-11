#include <iostream>
#include "Animal.h"
#include "Farm.h"

// Reuse your Animal class
// Create a Farm class
// it has list of Animals
// it has slots which defines the number of free places for animals
// breed() -> creates a new animal if there's place for it
// slaughter() -> removes the least hungry animal

void printAnimals(std::vector<Animal> vec);

int main()
{
    Animal tiger("TIGER");
    Animal rabbit("RABBIT");
    Animal fox("FOX");

    Farm theFarm;

    theFarm.add(tiger);
    theFarm.add(rabbit);
    theFarm.add(fox);

    std::vector<Animal> animals = theFarm.getAnimals();
    printAnimals(animals);



    return 0;
}

void printAnimals(std::vector<Animal> vec){
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i].getName() << ", hunger: " << vec[i].getHunger() << ", thirst: " << vec[i].getThirst() << std::endl;
        std::cout << std::endl;
    }
}