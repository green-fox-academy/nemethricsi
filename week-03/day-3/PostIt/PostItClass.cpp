#include <iostream>
#include "PostItClass.h"

PostItClass::PostItClass(const std::string &backgroundColor, const std::string &text, const std::string &textColor)
        : _backgroundColor(backgroundColor), _text(text), _textColor(textColor)
{
    std::cout << "Constructor with 3 parameters ran" << std::endl;
}

const std::string &PostItClass::getBackgroundColor() const
{
    return _backgroundColor;
}

const std::string &PostItClass::getText() const
{
    return _text;
}

const std::string &PostItClass::getTextColor() const
{
    return _textColor;
}
