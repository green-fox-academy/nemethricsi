#include <iostream>
#include "Printer.h"
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"
#include <vector>


int main(int argc, char *args[])
{
    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    // Create a Copier object and invoke copy function on it.

    std::vector<Printer *> printers;

    Printer2D printer2DOne(20, 30);
    printers.push_back(&printer2DOne);

    Printer2D printer2DTwo(30, 40);
    printers.push_back(&printer2DTwo);

    Printer3D printer3DOne(20, 30, 40);
    printers.push_back(&printer3DOne);

    Printer3D printer3DTwo(30, 40, 60);
    printers.push_back(&printer3DTwo);

    Copier copierOne(20, 30, 100);
    printers.push_back(&copierOne);

    std::cout << printers.size() << std::endl;

    for (int i = 0; i < printers.size(); ++i) {
        std::cout << printers[i]->print() << std::endl;
    }

    std::vector<Scanner *> scanners;

    Scanner scannerOne(300);
    Scanner scannerTwo(300);
    Copier copierTwo(10, 10, 30);
    Copier copierThree(20, 20, 50);

    scanners.push_back(&scannerOne);
    scanners.push_back(&scannerTwo);
    scanners.push_back(&copierTwo);
    scanners.push_back(&copierThree);

    for (int j = 0; j < scanners.size(); ++j) {
        std::cout << scanners[j]->scan() << std::endl;
    }

    Copier copierFour(40, 40, 200);

    copierFour.copy();


}