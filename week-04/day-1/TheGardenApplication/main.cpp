#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"


int main()
{
    Garden eden;

    Flower yellowFlower(Type::FLOWER, "yellow");
    eden.addPlant(&yellowFlower);
    Flower blueFlower(Type::FLOWER, "blue");
    eden.addPlant(&blueFlower);
    Tree purpleTree(Type::TREE, "purple");
    eden.addPlant(&purpleTree);
    Tree orangeTree(Type::TREE, "orange");
    eden.addPlant(&orangeTree);

    eden.printWhoNeedsWater();

    eden.toWater(40);

    eden.printWhoNeedsWater();

    eden.toWater(70);

    eden.printWhoNeedsWater();

    return 0;
}