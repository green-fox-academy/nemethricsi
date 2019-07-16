#include <iostream>
#include "Instrument.h"
#include "StringedInstrument.h"
#include "ElectricGuitar.h"
#include "BassGuitar.h"
#include "Violin.h"

Instrument::Instrument()
{}

Instrument::Instrument(const std::string &name) : _name(name)
{}
