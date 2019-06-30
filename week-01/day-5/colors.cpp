#include <iostream>
#include <string>


int main(int argc, char *args[])
{
    std::string colors [3][5] = {
            {"lime", "forest green", "olive", "pale green", "spring green"},
            {"orange red", "red", "tomato"},
            {"orchid", "violet", "pink", "hot pink"}
    };

    for (int i = 0; i < sizeof(colors)/ sizeof(colors[0]); ++i) {
        for (int j = 0; j < (sizeof(colors[0]) / (sizeof(colors[0][0]))); ++j) {
            std::cout << colors[i][j] << ", ";
        }
        std::cout << std::endl;
    }
    return 0;
}
