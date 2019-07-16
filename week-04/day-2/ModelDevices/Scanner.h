#ifndef MODELDEVICES_SCANNER_H
#define MODELDEVICES_SCANNER_H


class Scanner
{
public:
    Scanner(int speed);

    std::string scan();

protected:
    int _speed;

};


#endif //MODELDEVICES_SCANNER_H
