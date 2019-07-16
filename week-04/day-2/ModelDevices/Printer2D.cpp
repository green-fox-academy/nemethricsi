#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

Printer2D::Printer2D(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY)
{}

std::string Printer2D::getSize()
{
    return std::to_string(_sizeX) + "X" + std::to_string(_sizeY);
}
