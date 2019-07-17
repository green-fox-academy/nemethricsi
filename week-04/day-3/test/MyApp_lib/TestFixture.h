#ifndef MYAPP_TESTFIXTURE_H
#define MYAPP_TESTFIXTURE_H


class TestFixture
{
public:
    void drive();
    void refill();
    int getGas();
private:
    int _gas = 100;
};


#endif //MYAPP_TESTFIXTURE_H
