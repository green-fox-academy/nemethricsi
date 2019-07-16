#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "EggLayer.h"
#include "Reptile.h"
#include "EggLayer.h"
#include "Bird.h"


Animal::Animal(const std::string &name) : _name(name), _age(10), _gender(Gender::FEMALE), _hunger(100), _speed(100)
{}

Animal::Animal(const std::string &name, int age, Gender gender, int hunger, float speed) : _name(name), _age(age),
                                                                                           _gender(gender),
                                                                                           _hunger(hunger),
                                                                                           _speed(speed)
{}