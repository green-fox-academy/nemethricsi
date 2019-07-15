#ifndef THEGARDENAPPLICATION_FLOWER_H
#define THEGARDENAPPLICATION_FLOWER_H


class Flower : public Plant
{
public:
    Flower(Type type, const std::string &color, float currentWaterAmount);

    bool isWaterNeeded() override;

    void toWater(float water) override;

};


#endif //THEGARDENAPPLICATION_FLOWER_H
