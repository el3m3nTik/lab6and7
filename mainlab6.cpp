#include <iostream>
#include <algorithm>
#include "simple.h"
#include "sorting.h"

void Read(int &n, int matrix[3][3]) {
    std::cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> matrix[i][j];
}
bool isPrime(int n, int matrix[3][3]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (as::simple(matrix[i][j]))
                return true;
            else if (matrix[i][j] == 0)
                return true;
    return false;
}

void Write(int n, int matrix[3][3]) {
    std::cout << n << std::endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cout << matrix[i][j] << std::endl;
}

int main() {
    int n;
    int matrix[3][3];
    Read(n, matrix);
    if (isPrime(n, matrix))
        as::sorting(matrix);
    Write(n, matrix);
    
    return 0;
}