#include <iostream>
#include "Instrument.h"
#include "StringedInstrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"

Violin::Violin() : Violin(4)
{}

Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings), _sound("Screech")
{}

std::string Violin::sound()
{
    return _sound;
}
