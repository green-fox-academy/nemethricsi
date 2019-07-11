
#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include <iostream>


class Car
{
public:
    Car(std::string name, int gasAmount, int capacity);

    Car(int name);

    bool isFull();

    void fill();

    const std::string &getName() const;

private:
    std::string _name;
    int _gasAmount;
    int _capacity;

};


#endif //PETROLSTATION_CAR_H
