#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

Person::Person() : _name("Jane Doe"), _age(30), _gender(Gender::FEMALE)
{}

void Person::introduce()
{
    std::cout << getIntroduceText() << "." << std::endl;
}

std::string Person::getIntroduceText()
{
    return "Hi, I'm " + _name + ", a " + std::to_string(_age) + " year old " + genderToString(_gender);
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

const std::string &Person::getName() const
{
    return _name;
}

int Person::getAge() const
{
    return _age;
}

std::string Person::genderToString(Gender gender)
{
    switch (gender) {
        case Gender::MALE:
            return "male";
        case Gender::FEMALE:
            return "female";
    }
}

