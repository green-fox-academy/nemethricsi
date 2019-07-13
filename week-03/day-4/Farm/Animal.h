#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>


class Animal
{
public:
    Animal(std::string name);

    Animal(std::string, int hunger);

    void eat();

    void drink();

    void play();

    std::string getName() const;

    int getHunger() const;

    int getThirst() const;

private:
    std::string _name;
    int _hunger;
    int _thirst;

};


#endif //ANIMAL_ANIMAL_H