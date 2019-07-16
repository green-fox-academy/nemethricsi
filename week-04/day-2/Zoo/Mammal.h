#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H


class Mammal : public Animal
{
public:
    Mammal(const std::string &name);

    Mammal(const std::string &name, int age, Gender gender, int hunger, float speed);

    std::string getName() override;

    std::string breed() override;

};


#endif //ZOO_MAMMAL_H
