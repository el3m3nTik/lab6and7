#include <iostream>
#include <algorithm>
#include "simple.h"
#include "sorting.h"

int main() {
    int matrix[SIZE][SIZE];
    as::Read(matrix);
    if (as::isPrime(matrix))
        as::sorting(matrix);
    as::Write(matrix);

    return 0;
}