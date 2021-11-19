#include <iostream>
#include <algorithm>
#include "sortingRW.h"

namespace as {
    void sorting(int matrix[SIZE][SIZE]) {
        int temp[SIZE * SIZE], s = 0;

        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++, s++)
                temp[s] = matrix[i][j];

        sort(temp, temp + s, std::greater<>());

        s = 0;
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++, s++)
                matrix[i][j] = temp[s];
    }

    void Read(int matrix[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                std::cin >> matrix[i][j];
    }

    void Write(int matrix[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                std::cout << matrix[i][j] << '\t';
            }
            std::cout << std::endl;
        }
    }
}