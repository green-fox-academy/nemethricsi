#include "Sponsor.h"

Sponsor::Sponsor(std::string &name, int &age, Gender4 gender, std::string &company) : _name(name), _age(age), _gender(gender), _company(company), _hiredStudents(0)
{}

Sponsor::Sponsor() : _name("Jane Doe"), _age(30), _gender(Gender4::FEMALE), _company("Google"), _hiredStudents(0)
{}

void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << setGenderToString(_gender) << " who represents " << _company
              << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents++;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

std::string Sponsor::setGenderToString(Gender4 gender)
{
    switch (gender) {
        case Gender4::MALE:
            return "male";
        case Gender4::FEMALE:
            return "female";
    }
}