#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H


class Instrument
{
public:
    virtual void play() = 0;

protected:
    std::string _name;

};


#endif //INSTRUMENTS_INSTRUMENT_H
