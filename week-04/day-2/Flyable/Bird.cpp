#include "Bird.h"

Bird::Bird(const std::string &name, int age, std::string type) : Animal(name, age), Flyable(type)
{}

std::string Bird::land()
{
    return "land with my own feet";
}

std::string Bird::fly()
{
    return "I can fly with my own wings.";
}

std::string Bird::takeOff()
{
    return "I can take off with my own energy.";
}
