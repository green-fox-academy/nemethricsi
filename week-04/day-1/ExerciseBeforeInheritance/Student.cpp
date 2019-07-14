#include "Student.h"

Student::Student(const std::string &name, int age, Gender2 gender, std::string &previousOrganization) : _name(name), _age(age), _gender(gender), _previousOrganization(previousOrganization), _skippedDays(0)
{}

Student::Student() : _name("Jane Doe"), _age(30), _gender(Gender2::FEMALE), _previousOrganization("The School of Life"), _skippedDays(0)
{}

void Student::introduce()
{
    std::cout << "\"Hi, I'm " << _name << ", a " << _age << " year old " << setGenderToString(_gender) << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
}

std::string Student::setGenderToString(Gender2 gender)
{
    switch (gender) {
        case Gender2::MALE:
            return "male";
        case Gender2::FEMALE:
            return "female";
    }
}
