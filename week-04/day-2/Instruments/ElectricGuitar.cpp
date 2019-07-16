#include <iostream>
#include "Instrument.h"
#include "StringedInstrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"


ElectricGuitar::ElectricGuitar() : ElectricGuitar(6)
{}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric Guitar", numberOfStrings),
                                                      _sound("Twang")
{}

std::string ElectricGuitar::sound()
{
    return _sound;
}

