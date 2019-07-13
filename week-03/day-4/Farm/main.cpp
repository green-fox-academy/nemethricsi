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
    Animal tiger("TIGER", 10);
    Animal rabbit("RABBIT", 40);
    Animal fox("FOX", 40);

    Farm theFarm(10);

    std::cout << theFarm.getFreeSlots() << std::endl;

    theFarm.add(tiger);
    theFarm.add(rabbit);
    theFarm.add(fox);

    std::vector<Animal> animals = theFarm.getAnimals();
    printAnimals(animals);

    std::cout << theFarm.getFreeSlots() << std::endl;

    theFarm.add(theFarm.breed("BUNNY"));

    theFarm.slaughter();


    return 0;
}

void printAnimals(std::vector<Animal> vec)
{
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i].getName() << ", hunger: " << vec[i].getHunger() << ", thirst: " << vec[i].getThirst()
                  << std::endl;
        std::cout << std::endl;
    }
}