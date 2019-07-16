#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "EggLayer.h"
#include "Reptile.h"
#include "EggLayer.h"
#include "Bird.h"

Bird::Bird(const std::string &name) : EggLayer(name)
{}

Bird::Bird(const std::string &name, int age, Gender gender, int hunger, float speed) : EggLayer(name, age, gender,
                                                                                                hunger, speed)
{}
