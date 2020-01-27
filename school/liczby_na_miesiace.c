/**
 Program przyjmuje liczbę od 1 do 12 i wyświetla odpowiadającą nazwę miesiąca;
 **/

#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    int liczba = 0;
    printf("Podaj liczbę od 1 do 12: ");
    scanf("%i", &liczba);

    char* miesiac = NULL;

    switch (liczba) {
        case 1:
            miesiac = "styczeń";
            break;
        case 2:
            miesiac = "luty";
            break;
        case 3:
            miesiac = "marzec";
            break;
        case 4:
            miesiac = "kwiecień";
            break;
        case 5:
            miesiac = "maj";
            break;
        case 6:
            miesiac = "czerwiec";
            break;
        case 7:
            miesiac = "lipiec";
            break;
        case 8:
            miesiac = "sierpień";
            break;
        case 9:
            miesiac = "wrzesień";
            break;
        case 10:
            miesiac = "październik";
            break;
        case 11:
            miesiac = "listopad";
            break;
        case 12:
            miesiac = "grudzień";
            break;
        default:
            miesiac = "podałeś złą liczbę!";
    }

    printf("%s", miesiac);

    getchar();

    return 0;
}