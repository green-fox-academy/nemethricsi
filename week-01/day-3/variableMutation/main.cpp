#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    int a = 3;
    a += 10;

    std::cout << a << std::endl;

    int b = 100;
    b -= 7;

    std::cout << b << std::endl;

    int c = 44;
    c *= 2;

    std::cout << c << std::endl;

    int d = 125;
    d /= 5;

    std::cout << d << std::endl;

    int e = 8;
    e = e * e * e;

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool ifBigger = f1 > f2;
    std::cout << f1 << " is bigger than " << f2 << " : " << std::boolalpha << ifBigger << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool isDoubleBigger = (g1 < g2 * 2);
    std::cout << "The double of " << g2 << " is bigger than " << g1 << " : " << isDoubleBigger
              << std::endl;

    int h = 135798745;
    if (h % 11 == 0) {
        std::cout << h << " has 11 as a divisor" << std::endl;
    } else {
        std::cout << h << " hasn't got 11 as a divisor, because there is a modulus of " << h % 11 << std::endl;
    }

    int i1 = 10;
    int i2 = 3;
    int i2Squared = i2 * i2;
    int i2Cubed = i2Squared * i2;

    std::cout << i1 << " is higher than " << i2 << " squared: " << (i2Squared < i1) << std::endl;
    std::cout << i1 << " is smaller than " << i2 << " cubed: " << (i1 < i2Cubed) << std::endl;


    int j = 1521;
    std::cout << j << " is dividable by 3: " << ((j % 3) == 0) << std::endl;
    std::cout << j << " is dividable by 5: " << ((j % 5) == 0) << std::endl;

    return 0;
}