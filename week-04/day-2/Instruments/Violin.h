#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


class Violin : public StringedInstrument
{
public:
    Violin();

    Violin(int numberOfStrings);

    std::string sound() override;

private:
    std::string _sound;

};


#endif //INSTRUMENTS_VIOLIN_H
