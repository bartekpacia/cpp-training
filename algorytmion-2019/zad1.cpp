/**
 * Zadanie 1.
 */

#include <iostream>

int main() {
    int x = 5;
    int y = 5;
    int tablica1[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            tablica1[i][j] = 1;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << " " << tablica1[i][j] << " ";
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}