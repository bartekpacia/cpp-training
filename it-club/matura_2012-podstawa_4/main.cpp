/**
 * Zadanie z matury z informatyki 2012 - podstawa
 * https://cke.gov.pl/egzamin-maturalny/egzamin-w-starej-formule/arkusze/2012-2/maj-2012/
 * https://cke.gov.pl/images/_EGZAMIN_MATURALNY_OD_2015/Arkusze_egzaminacyjne/2012/maj/infor/a2_pp.pdf
 **/

#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream dane("cyfry.txt");
    ofstream wyjscie("zadanie4.txt");
    int obecna = 0;
    int liczba_z_najwieksza_suma = 0;
    int liczba_z_najmniejsza_suma = 0;
    int liczba_parzystych = 0;
    int najwieksza_suma = 0;
    int najmniejsza_suma = INT_MAX;

    wyjscie << "Liczby, ktorych cyfry tworza ciag rosnacy: " << endl;

    for (int i = 0; i < 1000; i++) {
        dane >> obecna;

        string obecna_string = to_string(obecna);
        int obecna_suma_cyfr = 0;
        bool jest_ciagiem_rosnacym = false;

        // Liczenie parzystych liczb
        if (obecna % 2 == 0) {
            liczba_parzystych++;
        }

        // Liczenie sumy cyfr obecnej liczby
        for (int i = 0; i < obecna_string.length(); i++) {
            int cyfra = obecna_string[i];
            cyfra = cyfra - 48;
            obecna_suma_cyfr = obecna_suma_cyfr + cyfra;
        }

        // Najmniejsza suma
        if (obecna_suma_cyfr < najmniejsza_suma) {
            najmniejsza_suma = obecna_suma_cyfr;
            liczba_z_najmniejsza_suma = obecna;
        }

        // Największa suma
        if (obecna_suma_cyfr > najwieksza_suma) {
            najwieksza_suma = obecna_suma_cyfr;
            liczba_z_najwieksza_suma = obecna;
        }

        // Czy jest ciągiem rosnącym?
        for (int i = 0; i < obecna_string.length() - 1; i++) {
            int obecna_cyfra = (int)obecna_string[i] - 48;
            int nastepna_cyfra = (int)obecna_string[i + 1] - 48;
            if (obecna_cyfra >= nastepna_cyfra) {
                jest_ciagiem_rosnacym = false;
                break;
            }
            jest_ciagiem_rosnacym = true;
        }

        if (jest_ciagiem_rosnacym) {
            wyjscie << obecna << endl;
        }
    }

    wyjscie << "Liczba parzystych liczb: " << liczba_parzystych << endl;
    wyjscie << "Liczba z największa suma cyfr: " << liczba_z_najwieksza_suma
            << endl;
    wyjscie << "Liczba z najmniejsza suma cyfr: " << liczba_z_najmniejsza_suma
            << endl;

    dane.close();
    cout << "Wykonano pomyslnie" << endl;
    getchar();

    return 0;
}
