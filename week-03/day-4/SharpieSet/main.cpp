#include <iostream>
#include "SharpieSet.h"
#include "Sharpie.h"
#include <vector>

// Sharpie Set
//  Reuse your Sharpie class
//
// Create SharpieSet class
//
//  it contains a list of Sharpie
//  countUsable() -> sharpie is usable if it has ink in it
//  removeTrash() -> removes all unusable sharpies
//  Test your methods by making some sharpies and call them. Make sure they print something meaningful to the console.

int main()
{
    SharpieSet sharpieSet;

    Sharpie yellowSharpie("yellow", 2.1);
    Sharpie greenSharpie("green", 2.5);
    Sharpie lilaSharpie("lila", 3);
    Sharpie blueSharpie("blue", 3, 70);
    Sharpie blackSharpie("black", 2, 0);
    Sharpie whiteSharpie("white", 1, 0);

    sharpieSet.add(yellowSharpie);
    sharpieSet.add(greenSharpie);
    sharpieSet.add(lilaSharpie);
    sharpieSet.add(blueSharpie);
    sharpieSet.add(blackSharpie);
    sharpieSet.add(whiteSharpie);

    for (int i = 0; i < sharpieSet.getSharpies().size(); ++i) {
        std::cout << sharpieSet.getSharpies()[i].getColor() << std::endl;
    }

    std::cout << "There are still " << sharpieSet.countUsable() << " usable Sharpie in the Sharpie set." << std::endl;

    sharpieSet.removeTrash();

    for (int i = 0; i < sharpieSet.getSharpies().size(); ++i) {
        std::cout << sharpieSet.getSharpies()[i].getColor() << std::endl;
    }

    return 0;
}