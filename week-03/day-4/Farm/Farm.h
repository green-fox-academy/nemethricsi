#ifndef FARM_FARM_H
#define FARM_FARM_H

#include "Animal.h"
#include <vector>


class Farm
{
public:
    Farm(int freeSlots);

    void add(Animal animal);

    std::vector<Animal> getAnimals();

    int getFreeSlots() const;

    Animal breed(std::string newAnimal);

    std::vector<Animal> slaughter();

private:
    std::vector<Animal> _animals;
    int _initFreeSlots;

};


#endif //FARM_FARM_H
