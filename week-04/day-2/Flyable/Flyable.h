#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H

#include <iostream>


class Flyable
{
public:


    Flyable(const std::string &type);

    std::string introduce();

    virtual std::string land() = 0;

    virtual std::string fly() = 0;

    virtual std::string takeOff() = 0;

protected:
    std::string _type;
};


#endif //FLYABLE_FLYABLE_H
