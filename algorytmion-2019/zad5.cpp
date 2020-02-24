/**
 * Napisz program, który dla zadanych dwóch liczb zmiennoprzecinkowych zwróci
 * iloczyn tych liczb.
 * UWAGA: program (oczywiście) nie może korzystać z
 * mnożenia, nie może również używać innych (poza dodawaniem) funkcji
 * matematycznych (np. mnożenie, dzielenie, potęga, pierwiastek, część
 * całkowita, zaokrąglenie, operacja modulo, itd.).
 */

#include <iostream>

float multiply(float liczba1, float liczba2) {
    if (liczba2 == 0) return 0;

    if (liczba2 > 0) {
        return liczba1 + multiply(liczba1, liczba2 - 1);
    }

    if (liczba2 < 0) {
        return -multiply(liczba1, -liczba2);
    }
}

int main() {
    float liczba1, liczba2, suma = 0;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> liczba1;
    std::cout << "Podak drugą liczbę: ";
    std::cin >> liczba2;

    suma = multiply(liczba1, liczba2);

    std::cout << "Suma: " << suma << std::endl;

    return 0;
}