#ifndef SHARPIESET_SHARPIESET_H
#define SHARPIESET_SHARPIESET_H

#include <vector>
#include "Sharpie.h"


class SharpieSet
{
public:
    SharpieSet();

    int countUsable();

    void removeTrash();

    void add(Sharpie &sharpie);

    const std::vector<Sharpie> &getSharpies() const;

private:
    std::vector<Sharpie> _sharpies;
};


#endif //SHARPIESET_SHARPIESET_H
