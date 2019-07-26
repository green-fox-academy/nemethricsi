#include "Flyable.h"
#include <iostream>

Flyable::Flyable(const std::string &type) : _type(type)
{}

std::string Flyable::introduce()
{
    return "I am a " + _type + ". I can " + land() + ", " + takeOff() + ", " + fly();

}
