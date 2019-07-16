#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

Scanner::Scanner(int speed) : _speed(speed)
{}

std::string Scanner::scan()
{
    return "I'm scanning a document " + std::to_string(_speed) + " ppm";
}
