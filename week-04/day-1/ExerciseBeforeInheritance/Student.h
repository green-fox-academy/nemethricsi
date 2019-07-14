#ifndef EXERCISEBEFOREINHERITANCE_STUDENT_H
#define EXERCISEBEFOREINHERITANCE_STUDENT_H
#include <iostream>

enum class Gender2 {
    MALE,
    FEMALE
};

class Student
{
public:
    Student(std::string &name, int age, Gender2 gender, std::string &previousOrganization);

    Student();

    void introduce();

    void getGoal();

    void skipDays(int numberOfDays);

    std::string setGenderToString(Gender2 gender);

private:
    std::string _name;
    int _age;
    Gender2 _gender;
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //EXERCISEBEFOREINHERITANCE_STUDENT_H
