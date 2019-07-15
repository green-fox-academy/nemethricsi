#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0)
{}

Student::Student() : _previousOrganization("The School of Life"), _skippedDays(0)
{}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()
{
    std::cout << getIntroduceText() << " from " << _previousOrganization << " who skipped " << _skippedDays
              << " days from the course already." << std::endl;
}

void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
}

