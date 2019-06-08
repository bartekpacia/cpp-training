/**
 * Task 2.1
 * Write a program which checks if 
 * a rectangular triangle can be created 
 * from sides a, b and c.
 **/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Podaj bok a: ";
    cin >> a;
    cout << "Podaj bok b: ";
    cin >> b;
    cout << "Podaj bok c: ";
    cin >> c;

    if (a * a + b * b == c * c) {
        cout << "trojkacik prostokątny :D";
    } else {
         cout << "nie";
    }

    return 0;
}