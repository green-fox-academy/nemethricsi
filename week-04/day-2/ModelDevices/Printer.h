#ifndef MODELDEVICES_PRINTER_H
#define MODELDEVICES_PRINTER_H

#include <string>


class Printer
{
public:
    virtual std::string getSize() = 0;

    std::string print();

};


#endif //MODELDEVICES_PRINTER_H
