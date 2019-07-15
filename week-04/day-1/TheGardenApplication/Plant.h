#ifndef THEGARDENAPPLICATION_PLANT_H
#define THEGARDENAPPLICATION_PLANT_H

enum class Type
{
    FLOWER,
    TREE
};

class Plant
{
public:
    Plant(Type type, const std::string &color, float currentWaterAmount);

    virtual bool isWaterNeeded();

    virtual void toWater(float water);

    std::string typeToString(Type type);

    Type getType() const;

    const std::string &getColor() const;

    float getCurrentWaterAmount() const;

protected:
    Type _type;
    std::string _color;
    float _currentWaterAmount;
};


#endif //THEGARDENAPPLICATION_PLANT_H
