#include "SharpieSet.h"

SharpieSet::SharpieSet()
{}

int SharpieSet::countUsable()
{
    int counter = 0;
    for (int i = 0; i < _sharpies.size(); ++i) {
        if (_sharpies[i].getInkAmount() > 0) {
            counter++;
        }
    }
    return counter;
}

void SharpieSet::removeTrash()
{
    for (int i = 0; i < _sharpies.size(); ++i) {
        if (_sharpies[i].getInkAmount() < 1) {
            _sharpies.erase(_sharpies.begin() + i);
            i--;
        }
    }
}

void SharpieSet::add(Sharpie &sharpie)
{
    _sharpies.push_back(sharpie);
}

const std::vector<Sharpie> &SharpieSet::getSharpies() const
{
    return _sharpies;
}
