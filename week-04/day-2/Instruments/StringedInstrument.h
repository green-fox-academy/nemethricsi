#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H


class StringedInstrument : public Instrument
{
public:

    StringedInstrument(const std::string &name, int numberOfStrings);

    virtual std::string sound() = 0;

    void play() override;

protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
