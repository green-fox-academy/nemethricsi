#include <iostream>
#include <vector>
#include "Carrier.h"
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

F35::F35()
{
    _maxAmmo = 12;
    _baseDamage = 50;
    _type = Type::F35;
}

std::string F35::getType()
{
    return "F-35";
}

