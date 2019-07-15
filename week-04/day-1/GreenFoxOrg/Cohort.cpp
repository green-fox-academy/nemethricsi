#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

Cohort::Cohort(const std::string &name) : _name(name)
{}

void Cohort::addStudent(Student *student)
{
    _students.push_back(student);
}

void Cohort::addMentor(Mentor *mentor)
{
    _mentors.push_back(mentor);
}

void Cohort::info()
{
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size()
              << " mentors." << std::endl;
}
