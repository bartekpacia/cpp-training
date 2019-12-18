#include <math.h>
#include <stdio.h>

/**
 * Oblicza x1 i x2 dla trójmianu kwadratowego
 **/

int main() {
    printf("Program pokazuje pierwiastki równania kwadratowego.\n");
    float a;
    float b;
    float c;
    printf("Wprowadź a: \n");
    scanf("%f", &a);
    printf("Wprowadź b: \n");
    scanf("%f", &b);
    printf("Wprowadź c: \n");
    scanf("%f", &c);

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Delta jest mniejsza od zera!");
        getchar();
        return 0;
    }

    // x1 = # -b - pierwiastek delta / 2a
    float x1 = (-b - sqrt(delta)) / a * 2;
    float x2 = (-b + sqrt(delta)) / a * 2;

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

    getchar();

    return 0;
}