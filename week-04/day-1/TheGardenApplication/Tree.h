#ifndef THEGARDENAPPLICATION_TREE_H
#define THEGARDENAPPLICATION_TREE_H


class Tree : public Plant
{
public:
    Tree(Type type, const std::string &color, float currentWaterAmount);

    bool isWaterNeeded() override;

    void toWater(float water) override;

};


#endif //THEGARDENAPPLICATION_TREE_H
