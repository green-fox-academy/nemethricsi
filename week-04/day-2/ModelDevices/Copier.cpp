#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed)
{}

void Copier::copy()
{
    std::cout << scan() << " and " << print() << std::endl;
}
