#ifndef GREENFOXORG_SPONSOR_H
#define GREENFOXORG_SPONSOR_H


class Sponsor : public Person
{
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void introduce() override;

    void hire();

    void getGoal() override;

private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREENFOXORG_SPONSOR_H
