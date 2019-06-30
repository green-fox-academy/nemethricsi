#include <iostream>
#include <string>

int main(int argc, char *args[])
{
    int n = 0;
    std::cout << "Enter a number (n) for drawing a n*n matrix: ";
    std::cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < n; ++l) {
            std::cout << matrix[k][l] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}