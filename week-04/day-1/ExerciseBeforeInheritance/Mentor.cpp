#include "Mentor.h"

Mentor::Mentor(std::string &name, int &age, Gender3 gender, Level level) : _name(name), _age(age), _gender(gender), _level(level)
{}

Mentor::Mentor() : _name("Jane Doe"), _age(30), _gender(Gender3::FEMALE), _level(Level::INTERMEDIATE)
{}

void Mentor::introduce()
{
    std::cout << "\"Hi, I'm " << _name << ", a " << _age << " year old " << setGenderToString(_gender) << " " << setLevelToString(_level) << " mentor." << std::endl;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

std::string Mentor::setGenderToString(Gender3 gender)
{
    switch (gender) {
        case Gender3::MALE:
            return "male";
        case Gender3::FEMALE:
            return "female";
    }
}

std::string Mentor::setLevelToString(Level level)
{
    switch (level) {
        case Level::JUNIOR:
            return "junior";
        case Level::INTERMEDIATE:
            return "intermediate";
        case Level::SENIOR:
            return "senior";
    }
}
