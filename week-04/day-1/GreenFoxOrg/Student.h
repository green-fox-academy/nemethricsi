#ifndef GREENFOXORG_STUDENT_H
#define GREENFOXORG_STUDENT_H

#include "Person.h"


class Student : public Person
{
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //GREENFOXORG_STUDENT_H
