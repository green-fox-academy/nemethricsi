#ifndef GREENFOXORG_COHORT_H
#define GREENFOXORG_COHORT_H

#include <vector>


class Cohort
{
public:
    Cohort(const std::string &name);

    void addStudent(Student *student);

    void addMentor(Mentor *mentor);

    void info();

private:
    std::string _name;
    std::vector<Student *> _students;
    std::vector<Mentor *> _mentors;
};


#endif //GREENFOXORG_COHORT_H
