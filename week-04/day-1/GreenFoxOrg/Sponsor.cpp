#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"


Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company),
                                                                                                _hiredStudents(0)
{}

Sponsor::Sponsor() : _company("Google"), _hiredStudents(0)
{}

void Sponsor::introduce()
{
    std::cout << getIntroduceText() << " who represents " << _company << " and hired " << _hiredStudents
              << " students so far." << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents++;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}
