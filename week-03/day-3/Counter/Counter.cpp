//
// Created by Richárd Németh on 2019-07-10.
//

#include "Counter.h"
#include <iostream>

Counter::Counter() : _initialValue(0)
{
    std::cout << "constructor ran w/o parameter" << std::endl;
}

Counter::Counter(int value) : _initialValue(value)
{
    std::cout << "constructor ran w/ 1 parameter" << std::endl;
}

void Counter::add(int number)
{
    _actualValue += number;

}

void Counter::add()
{
    _actualValue++;
}

int Counter::get()
{
    return _actualValue;
}

void Counter::reset()
{
    _actualValue = _initialValue;
}
