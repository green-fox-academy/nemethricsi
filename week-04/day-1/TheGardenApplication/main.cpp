#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"


int main()
{
    Garden eden("Eden");

    Flower yellowFlower(Type::FLOWER, "yellow", 0);
    eden.addPlant(&yellowFlower);
    Flower blueFlower(Type::FLOWER, "blue", 0);
    eden.addPlant(&blueFlower);
    Tree purpleTree(Type::TREE, "purple", 0);
    eden.addPlant(&purpleTree);
    Tree orangeTree(Type::TREE, "orange", 0);
    eden.addPlant(&orangeTree);

    eden.printWhoNeedsWater();

    eden.toWater(40);

    eden.printWhoNeedsWater();

    eden.toWater(70);

    eden.printWhoNeedsWater();

    return 0;
}