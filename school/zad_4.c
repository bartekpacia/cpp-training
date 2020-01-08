// Użytownik podaje liczbę naturalną
// program wyswietla czy jest dwucryfrowa czy jednocyfrowa
#include <stdio.h>

int main() {
    printf("Hello, World from C!\n");

    int number;
    printf("Podaj liczbę: ");
    scanf("%i", &number);

    if (number / 10 < 1) {
        printf("jednocyfrowa liczba");
    } else if (number / 10 < 10) {
        printf("dwucyfrowa");
    } else if (number / 10 < 100) {
        printf("trzycyfrowa");
    } else if (number / 10 < 1000) {
        printf("czterocyfrowa");
    }

    getchar();
    return 0;
}