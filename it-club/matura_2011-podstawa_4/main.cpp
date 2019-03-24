/**
 * Task from Matura exam (category IT)
 * https://cke.gov.pl/egzamin-maturalny/egzamin-w-starej-formule/arkusze/2011-2/maj-2011/
 * https://cke.gov.pl/images/_EGZAMIN_MATURALNY_OD_2015/Arkusze_egzaminacyjne/2011/P/inf_pp_2.pdf
 **/

#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()

{
    ifstream wejscie("hasla.txt");
    ofstream wyjscieA("wynik4a.txt");
    ofstream wyjscieB("wynik4b.txt");
    ofstream wyjscieC("wynik4c.txt");
    string wyraz;
    int wszystkie = 200;
    int parzyste = 0;
    int nieparzyste = 0;

    while (!wejscie.eof())
    {
        bool jestPalindromem = true;
        wejscie >> wyraz;

        // Odnajdywanie i liczenie parzystych
        if (wyraz.length() % 2 == 0)
        {
            //cout << wyraz << endl;
            parzyste++;
        }

        // Odnajdywanie palindromów
        int i = 0;
        int j = wyraz.length() - 1;
        for (; i < j;)
        {
            if (wyraz[i] != wyraz[j])
            {
                jestPalindromem = false;
            }

            i++;
            j--;
        }

        if (jestPalindromem)
        {
            cout << wyraz << endl;
            wyjscieB << wyraz << endl;
        }

        // Sumowanie ASCII
        i = 0;
        j = 1;
        for (; i < wyraz.length() - 1; i++, j++)
        {
            if (wyraz[i] + wyraz[j] == 220)
            {
                wyjscieC << wyraz << endl;
                break;
            }
        }
    }
    nieparzyste = wszystkie - parzyste;
    cout << "Liczba parzystych hasel:" << parzyste << endl;
    cout << "Liczba nieparzystych hasel:" << nieparzyste << endl;
    wyjscieA << "Liczba parzystych hasel:" << parzyste << endl;
    wyjscieA << "Liczba nieparzystych hasel:" << nieparzyste << endl;

    _getch();

    return 0;
}
