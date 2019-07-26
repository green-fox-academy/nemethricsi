#include <iostream>
#include <vector>
#include "Carrier.h"
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

Carrier::Carrier(int storeOfAmmo, int hp) : _storeOfAmmo(storeOfAmmo), _hp(hp)
{}

void Carrier::add(Aircraft &aircraft)
{
    _aircrafts.push_back(&aircraft);
}

void Carrier::reduceHp(int hp)
{
    _hp -= hp;
}

void Carrier::fill()
{
    int totalAmmoNeeded = 0;
    int ammoForOne = 0;

    if (_storeOfAmmo <= 0) {
        std::cout << "There is no ammo to fill right now." << std::endl;
        std::cout << "Result: " << std::endl;
        getStatus();
        return;
    }

    std::cout << "Carrier is filling..." << std::endl;
    for (auto &_aircraft : _aircrafts) {
        totalAmmoNeeded += _aircraft->getMaxAmmo() - _aircraft->getAmmo();
    }

    if (totalAmmoNeeded <= _storeOfAmmo) {
        for (auto &_aircraft : _aircrafts) {
            ammoForOne = _aircraft->getMaxAmmo() - _aircraft->getAmmo();
            _storeOfAmmo -= ammoForOne - _aircraft->refill(ammoForOne);
        }
    } else {
        for (auto _aircraft : _aircrafts) {
            ammoForOne = _aircraft->getMaxAmmo() - _aircraft->getAmmo();
            if (_aircraft->isPriority() && _storeOfAmmo >= ammoForOne) {
                _aircraft->refill(ammoForOne);
                _storeOfAmmo -= ammoForOne;
            } else if (_aircraft->isPriority() && _storeOfAmmo < ammoForOne) {
                _aircraft->refill(_storeOfAmmo);
                _storeOfAmmo = 0; // =0 carrier is out of ammo
                std::cout << "Carrier is out of ammo can't fill even all the priority Aircrafts!" << std::endl;
                std::cout << "Result: " << std::endl;
                getStatus();
                return;
            }
        }
        for (auto _aircraft : _aircrafts) {
            ammoForOne = _aircraft->getMaxAmmo() - _aircraft->getAmmo();
            if (!(_aircraft->isPriority()) && _storeOfAmmo >= ammoForOne) {
                _storeOfAmmo -= ammoForOne - _aircraft->refill(ammoForOne);
            } else if (!(_aircraft->isPriority()) && _storeOfAmmo < ammoForOne) {
                _aircraft->refill(_storeOfAmmo);
                _storeOfAmmo = 0;
                std::cout << "Carrier is out of ammo can't fill all the F-16 Aircrafts!" << std::endl;
                std::cout << "Result: " << std::endl;
                getStatus();
                return;
            }
        }
    }
    std::cout << "Result: " << std::endl;
    getStatus();
}

void Carrier::getStatus()
{
    int totalDamage = 0;
    std::string aircraftsStatus;
    for (auto &_aircraft : _aircrafts) {
        totalDamage += _aircraft->getAmmo() * _aircraft->getBaseDamage();
    }

    std::string ownStatus = "HP: " + std::to_string(_hp) + ", Aircraft count: " + std::to_string(_aircrafts.size()) +
                            ", Ammo Storage: " + std::to_string(_storeOfAmmo) + ", Total damage: " +
                            std::to_string(totalDamage) + "\nAircrafts:\n";

    for (auto &_aircraft : _aircrafts) {
        std::string aircraftInfo =
                _aircraft->getStatus();
        aircraftsStatus += aircraftInfo;
    }
    std::cout << ownStatus + aircraftsStatus << std::endl;
}

void Carrier::fight(Carrier &carrier)
{
    int totalDamage = 0;
    for (auto &_aircraft : _aircrafts) {
        totalDamage += _aircraft->fight();
    }
    if (totalDamage > 0) {
        std::cout << "Attack!!!" << std::endl;
        carrier.reduceHp(totalDamage);
        std::cout << "Damaged carrier: " << std::endl;
        carrier.getStatus();
    } else {
        std::cout << "You don't have any ammo for fighting." << std::endl;
    }

    if (carrier._hp < 1) {
        std::cout << "It's dead Jim :(" << std::endl;
    }
}


