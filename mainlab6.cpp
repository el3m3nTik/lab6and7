#include <iostream>
#include <algorithm>
#include "simple.h"
#include "sorting.h"

void Read(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> matrix[i][j];
}

bool isPrime(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (as::simple(matrix[i][j]))
                return true;
            else if (matrix[i][j] == 0)
                return true;
    return false;
}

void Write(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[SIZE][SIZE];
    Read(matrix);
    if (isPrime(matrix))
        as::sorting(matrix);
    Write(matrix);

    return 0;
}