#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include "EggLayer.h"

class Reptile : public EggLayer
{
public:
    Reptile(const std::string &name);

    Reptile(const std::string &name, int age, Gender gender, int hunger, float speed);
};


#endif //ZOO_REPTILE_H
