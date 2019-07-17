#include "TestFixture.h"

void TestFixture::drive()
{
    _gas -= 5;
}

void TestFixture::refill()
{
    _gas = 100;
}

int TestFixture::getGas()
{
    return _gas;
}



