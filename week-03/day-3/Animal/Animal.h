//
// Created by Richárd Németh on 2019-07-10.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal
{
public:
    Animal();

    void eat();

    void drink();

    void play();

private:
    int _hunger;
    int _thirst;

};


#endif //ANIMAL_ANIMAL_H
