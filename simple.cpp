#include <iostream>
#include "simple.h"

namespace as
{
    int simple(int n) {
        if (n <= 1)
            return 0;

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
            return 1;
        }
        return 1;
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
}