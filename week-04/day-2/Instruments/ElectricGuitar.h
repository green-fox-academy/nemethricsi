#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H


class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    std::string sound() override;

private:
    std::string _sound;

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
