#ifndef MODELDEVICES_PRINTER3D_H
#define MODELDEVICES_PRINTER3D_H


class Printer3D : public Printer
{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);

    std::string getSize() override;

protected:
    int _sizeX;
    int _sizeY;
    int _sizeZ;

};


#endif //MODELDEVICES_PRINTER3D_H
