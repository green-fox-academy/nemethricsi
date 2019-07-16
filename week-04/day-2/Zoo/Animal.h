#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H


enum class Gender
{
    MALE,
    FEMALE
};

class Animal
{
public:

    Animal(const std::string &name);

    Animal(const std::string &name, int age, Gender gender, int hunger, float speed);

    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

protected:
    std::string _name;
    int _age;
    Gender _gender;
    int _hunger;
    float _speed;
};


#endif //ZOO_ANIMAL_H
