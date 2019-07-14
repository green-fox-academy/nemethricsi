#ifndef EXERCISEBEFOREINHERITANCE_SPONSOR_H
#define EXERCISEBEFOREINHERITANCE_SPONSOR_H
#include <iostream>

enum class Gender4 {
    MALE,
    FEMALE
};

class Sponsor
{
public:
    Sponsor(std::string &name, int &age, Gender4 gender, std::string &company);

    Sponsor();

    void introduce();

    void hire();

    void getGoal();

    std::string setGenderToString(Gender4 gender);

private:
    std::string _name;
    int _age;
    Gender4 _gender;
    std::string _company;
    int _hiredStudents;

};


#endif //EXERCISEBEFOREINHERITANCE_SPONSOR_H
