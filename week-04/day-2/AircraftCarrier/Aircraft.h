#ifndef AIRCRAFTCARRIER_AIRCRAFT_H
#define AIRCRAFTCARRIER_AIRCRAFT_H

enum class Type
{
    F16,
    F35
};

class Aircraft
{
public:

    Aircraft();

    int fight();

    int refill(int amount);

    std::string getType();

    std::string getStatus();

    bool isPriority();

    int getAmmo() const;

    int getMaxAmmo() const;

    int getBaseDamage() const;

protected:
    int _ammo;
    int _maxAmmo;
    int _baseDamage;
    Type _type;
};


#endif //AIRCRAFTCARRIER_AIRCRAFT_H
