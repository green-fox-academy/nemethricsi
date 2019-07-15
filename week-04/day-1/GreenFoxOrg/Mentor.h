#ifndef GREENFOXORG_MENTOR_H
#define GREENFOXORG_MENTOR_H


enum class Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    std::string levelToString(Level level);

    void getGoal() override;

    void introduce() override;

private:
    Level _level;

};


#endif //GREENFOXORG_MENTOR_H
