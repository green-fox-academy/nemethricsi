#ifndef MODELDEVICES_COPIER_H
#define MODELDEVICES_COPIER_H

class Copier : public Printer2D, public Scanner
{
public:
    Copier(int sizeX, int sizeY, int speed);

    void copy();

};


#endif //MODELDEVICES_COPIER_H
