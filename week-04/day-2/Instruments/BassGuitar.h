#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound() override;


private:
    std::string _sound;

};


#endif //INSTRUMENTS_BASSGUITAR_H
