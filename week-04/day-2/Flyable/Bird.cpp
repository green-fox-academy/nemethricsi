#include "Bird.h"

Bird::Bird(const std::string &name, int age) : Animal(name, age)
{}

void Bird::land()
{
    std::cout << "I can land with my own feet" << std::endl;
}

void Bird::fly()
{
    std::cout << "I can fly with my own wings." << std::endl;
}

void Bird::takeOff()
{
    std::cout << "I can take off with my own energy." << std::endl;
}
