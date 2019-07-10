#include <iostream>
#include "Sharpie.h"

// Create Sharpie class
//  We should know about each sharpie their color (which should be a string), width (which will be a floating point number),
//      inkAmount (another floating point number)
//  When creating one, we need to specify the color and the width
//  Every sharpie is created with a default 100 as inkAmount
//  We can use() the sharpie objects
//  which decreases inkAmount

int main()
{
    Sharpie yellow("yellow", 2.4);

    std::cout << "color: " << yellow.getColor() << ", width: " << yellow.getWidth() << ", inkAmount: "
              << yellow.getInkAmount() << std::endl;

    yellow.use();

    std::cout << "new inkAmount: " << yellow.getInkAmount() << std::endl;


    return 0;
}