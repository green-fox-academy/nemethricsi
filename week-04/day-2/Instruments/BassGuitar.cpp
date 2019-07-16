#include <iostream>
#include "Instrument.h"
#include "StringedInstrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"

BassGuitar::BassGuitar() : BassGuitar(4)
{}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument("Bass Guitar", numberOfStrings),
                                              _sound("Duum-duum-duum")
{}

std::string BassGuitar::sound()
{
    return _sound;
}


