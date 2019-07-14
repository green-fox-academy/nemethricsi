#ifndef EXERCISEBEFOREINHERITANCE_PERSON_H
#define EXERCISEBEFOREINHERITANCE_PERSON_H
#include <iostream>


enum class Gender {
    MALE,
    FEMALE
};

class Person
{
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

    void introduce();

    void getGoal();

    std::string setGenderToString(Gender gender);

private:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //EXERCISEBEFOREINHERITANCE_PERSON_H
