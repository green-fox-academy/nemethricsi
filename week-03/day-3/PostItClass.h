#include <iostream>

#ifndef DAY_3_POSTITCLASS_H
#define DAY_3_POSTITCLASS_H


class PostItClass
{
public:

    PostItClass(const std::string &backgroundColor, const std::string &text, const std::string &textColor);

    const std::string &getBackgroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif //DAY_3_POSTITCLASS_H
