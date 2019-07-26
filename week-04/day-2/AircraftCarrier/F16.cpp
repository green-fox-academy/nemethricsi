#include <iostream>
#include <vector>
#include "Carrier.h"
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

F16::F16()
{
    _maxAmmo = 8;
    _baseDamage = 30;
    _type = Type::F16;
}

std::string F16::getType()
{
    return "F-16";
}
