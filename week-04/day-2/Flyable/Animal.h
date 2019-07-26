#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H

#include <iostream>


class Animal
{
public:
    Animal(const std::string &name, int age);

protected:
    std::string _name;
    int _age;
};


#endif //FLYABLE_ANIMAL_H
