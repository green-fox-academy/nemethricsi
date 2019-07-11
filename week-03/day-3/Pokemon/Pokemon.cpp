#include "Pokemon.h"


Pokemon::Pokemon(const std::string& name, const std::string& type, const std::string& effectiveAgainst)
{
    _name = name;
    _type = type;
    _effectiveAgainst = effectiveAgainst;
}

bool Pokemon::isEffectiveAgainst(Pokemon anotherPokemon)
{
    return _effectiveAgainst == anotherPokemon._type;
}

const std::string &Pokemon::getName() const
{
    return _name;
}

const std::string &Pokemon::getType() const
{
    return _type;
}

const std::string &Pokemon::getEffectiveAgainst() const
{
    return _effectiveAgainst;
}
