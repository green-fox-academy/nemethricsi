#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"
    int a = 0;
    while (a < 100) {
        std::cout << "I won't cheat on the exam!" << std::endl;
        a++;
    }

    return 0;
}