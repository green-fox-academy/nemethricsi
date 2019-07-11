#include "Sharpie.h"


Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width), _inkAmount(100.0)
{}

void Sharpie::use()
{
    _inkAmount--;
}

const std::string &Sharpie::getColor() const
{
    return _color;
}

float Sharpie::getWidth() const
{
    return _width;
}

float Sharpie::getInkAmount() const
{
    return _inkAmount;
}

Sharpie::Sharpie(const std::string &color, float width, float inkAmount) : _color(color), _width(width),
                                                                           _inkAmount(inkAmount)
{}
