#include <stdio.h>

int main() {
    printf("Program oblicza sumę dwóch liczb.\n");
    float a;
    float b;
    printf("Wprowadź pierwszą liczbę: \n");
    scanf("%f", &a);
    printf("Wprowadź pierwszą liczbę: \n");
    scanf("%f", &b);

    float suma = a * b;
    printf("Iloczyn %f i %f wynosi: %f\n", a, b, suma);
    printf("Iloczyn %.2f i %.2f wynosi: %.2f\n", a, b, suma);

    getchar();
    return 0;
}