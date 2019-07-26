#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H

#include "Flyable.h"
#include "Animal.h"

class Bird : public Flyable, public Animal
{
public:

    Bird(const std::string &name, int age, std::string type);

    std::string land() override;

    std::string fly() override;

    std::string takeOff() override;

};


#endif //FLYABLE_BIRD_H
