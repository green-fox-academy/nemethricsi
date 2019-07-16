#ifndef MODELDEVICES_PRINTER2D_H
#define MODELDEVICES_PRINTER2D_H

#include "Printer.h"


class Printer2D : public Printer
{
public:
    Printer2D(int sizeX, int sizeY);

    std::string getSize() override;

protected:
    int _sizeX;
    int _sizeY;
};


#endif //MODELDEVICES_PRINTER2D_H
