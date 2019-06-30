#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    double a = 24;
    int out = 0;

    if (static_cast<int>(a) % 2 == 0) {
        out++;
    }
    std::cout << out << std::endl;

    int b = 13;
    std::string out2 = "";

    if (b < 10) {
        out2 = "Less!";
    } else if (b > 10) {
        out2 = "More!";
    } else {
        out2 = "Sweet!";
    }
    std::cout << out2 << std::endl;


    int c = 123;
    int credits = 100;
    bool isBonus = false;

    if (credits >= 50 && !isBonus) {
        c -= 2;
    } else if (credits < 50 && !isBonus) {
        c--;
    }
    std::cout << c << std::endl;


    int d = 7;
    int time = 200;
    std::string out3 = "";

    if (d % 4 == 0 && time <= 200) {
        out3 = "check";
    } else if (time > 200) {
        out3 = "Time out";
    } else {
        out3 = "Run Forest Run!";
    }
    std::cout << out3 << std::endl;

    return 0;
}