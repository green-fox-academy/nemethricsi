#ifndef GREENFOXORG_PERSON_H
#define GREENFOXORG_PERSON_H

#include <string>

enum class Gender
{
    MALE,
    FEMALE
};

class Person
{
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

    std::string genderToString(Gender gender);

    virtual void introduce();

    virtual void getGoal();

    const std::string &getName() const;

    int getAge() const;

protected:
    std::string _name;
    int _age;
    Gender _gender;


};


#endif //GREENFOXORG_PERSON_H
