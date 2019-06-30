#include <iostream>

int main(int argc, char *args[])
{
    for (int i = 0; i < 8; ++i) {
        if (i % 2 == 0) {
            std::cout << " % % % %" << std::endl;
        } else {
            std::cout << "% % % %" << std::endl;
        }
    }
    return 0;
}