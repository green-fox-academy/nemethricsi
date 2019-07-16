#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ) : _sizeX(sizeX), _sizeY(sizeY), _sizeZ(sizeZ)
{}

std::string Printer3D::getSize()
{
    return std::to_string(_sizeX) + "X" + std::to_string(_sizeY) + "X" + std::to_string(_sizeZ);
}
