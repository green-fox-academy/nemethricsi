#include <iostream>
#include "Counter.h"

// Create Counter class
//      which has an integer field value
//      when creating it should have a default value 0 or we can specify it when creating
//      we can add(number) to this counter another whole number
//      or we can add() without parameters just increasing the counter's value by one
//      and we can get() the current value
//      also we can reset() the value to the initial value
// Check if everything is working fine with the proper test
//      Download main.cpp and use that instead of the default
//      Without modifying anything in it, compile and run.
//      Check the console output whether any of the tests failed.

void checkValue(const std::string& name, int expected, int actual)
{
    if(expected != actual) {
        std::cout << name << "Failed! Expected: " << expected << " Actual: " << actual << std::endl;
    }
    else {
        std::cout << name << "Passed!" << std::endl;
    }
}

int main(int argc, char* args[])
{
    Counter c;
    checkValue("getZero", 0, c.get());

    c.add(5);
    checkValue("addMore", 5, c.get());

    c.add();
    checkValue("addOne", 6, c.get());

    c.reset();
    checkValue("getZero2", 0, c.get());

    Counter c2(7);
    checkValue("getInit", 7, c2.get());

    c2.reset();
    checkValue("reset", 7, c2.get());

    return 0;
}