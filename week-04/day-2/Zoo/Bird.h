#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include <string>
#include "EggLayer.h"

class Bird : public EggLayer
{
public:
    Bird(const std::string &name);

    Bird(const std::string &name, int age, Gender gender, int hunger, float speed);

};


#endif //ZOO_BIRD_H
