#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "EggLayer.h"
#include "Reptile.h"
#include "EggLayer.h"
#include "Bird.h"


int main(int argc, char *args[])
{
    Reptile reptile("Crocodile");
    Mammal mammal("Koala");
    Bird bird("Parrot");

    Bird bird2("Galamb", 2, Gender::FEMALE, 40, 45);

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;

    std::cout << "A " << bird2.getName() << " is breeding by " << bird.breed() << std::endl;
}