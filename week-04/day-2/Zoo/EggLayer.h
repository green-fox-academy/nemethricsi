#ifndef ZOO_EGGLAYER_H
#define ZOO_EGGLAYER_H


class EggLayer : public Animal
{
public:

    EggLayer(const std::string &name);

    EggLayer(const std::string &name, int age, Gender gender, int hunger, float speed);

    std::string getName() override;

    std::string breed() override;

};


#endif //ZOO_EGGLAYER_H
