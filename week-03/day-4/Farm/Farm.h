#ifndef FARM_FARM_H
#define FARM_FARM_H

#include "Animal.h"
#include <vector>


class Farm
{
public:
    Farm();

    void add(Animal animal);

    std::vector<Animal> getAnimals();

    int getFreeSlots() const;

private:
    std::vector<Animal> _animals;
    int _freeSlots;

};


#endif //FARM_FARM_H
