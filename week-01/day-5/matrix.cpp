#include <iostream>
#include <string>

// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//   by dynamically, we mean here that you can change the size of the matrix
//   by changing an input value or a parameter or this combined
//
//   1 0 0 0
//   0 1 0 0
//   0 0 1 0
//   0 0 0 1
//
// - Print this two dimensional array to the output

int main(int argc, char *args[])
{

    int n = 8; //n x n -es mátrix

    int matrix[n][n];

    for (int i = 0; i <n; ++i) {
        for (int j = 0; j <n; ++j) {
            matrix[i][j] = 0;
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