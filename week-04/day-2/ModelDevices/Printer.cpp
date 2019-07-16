#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"


std::string Printer::print()
{
    return "I'm printing something that's " + getSize() + " cm.";
}
