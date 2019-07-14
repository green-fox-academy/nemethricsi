#ifndef EXERCISEBEFOREINHERITANCE_MENTOR_H
#define EXERCISEBEFOREINHERITANCE_MENTOR_H
#include <iostream>

enum class Gender3 {
    MALE,
    FEMALE
};

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor
{
public:
    Mentor(std::string &name, int &age, Gender3 gender, std::string &level);

    Mentor();

    void introduce();

    void getGoal();

    std::string setGenderToString(Gender3 gender);

    std::string setLevelToString(Level level);

private:
    std::string _name;
    int _age;
    Gender3 _gender;
    Level _level;
};


#endif //EXERCISEBEFOREINHERITANCE_MENTOR_H
