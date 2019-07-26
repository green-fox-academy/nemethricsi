#include <iostream>
#include <vector>
#include "Carrier.h"
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

Aircraft::Aircraft() : _ammo(0)
{}


int Aircraft::fight()
{
    int damage = _ammo * _baseDamage;
    _ammo = 0;
    return damage;
}

int Aircraft::refill(int amount)
{
    int toFill = _maxAmmo - _ammo;
    if (amount >= toFill) {
        _ammo += toFill;
        return amount - toFill;
    } else {
        _ammo += amount;
        return 0;
    }

}

std::string Aircraft::getType()
{
    switch (_type) {
        case Type::F16:
            return "F-16";
        case Type::F35:
            return "F-35";
    }
}

std::string Aircraft::getStatus()
{
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammo) + ", Base Damage: " + std::to_string(_baseDamage) +
           ", All Damage: " +
           std::to_string(_ammo * _baseDamage) + "\n";
}

bool Aircraft::isPriority()
{
    switch (_type) {
        case Type::F16:
            return false;
        case Type::F35:
            return true;
    }
}

int Aircraft::getAmmo() const
{
    return _ammo;
}

int Aircraft::getMaxAmmo() const
{
    return _maxAmmo;
}

int Aircraft::getBaseDamage() const
{
    return _baseDamage;
}
