#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H


class Flyable
{
public:
    virtual void land() = 0;

    virtual void fly() = 0;

    virtual void takeOff() = 0;
};


#endif //FLYABLE_FLYABLE_H
