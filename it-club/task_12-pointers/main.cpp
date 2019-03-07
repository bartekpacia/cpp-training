/**
 * Just some fun with pointers.
 **/

#include <iostream>

using namespace std;

int main()
{

    int x = 4;
    int *w = &x;
    int *n = new int;
    *n = 25;

    //w = w + 2; // Zmiana adresu na o 2 wi�kszy

    *w = *w + 6;

    cout << "x: " << x << endl;
    cout << "v value: " << w << endl;
    cout << "v pointer: " << *w << endl;
    cout << "n: " << *n << endl;

    delete (n);

    return 0;
}
