
#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>


class Sharpie
{
public:
    Sharpie(const std::string &color, float width);

    void use();

    const std::string &getColor() const;

    float getWidth() const;

    float getInkAmount() const;

private:
    std::string _color;
    float _width;
    float _inkAmount;


};


#endif //SHARPIE_SHARPIE_H
