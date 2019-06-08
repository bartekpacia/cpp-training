#include <iostream>

/**
 * Write a program which calculates y = 3x
 * for numbers from 0 to 10.
 */

using namespace std;

int main()
{
    for(int x = 0; x <= 10; x = x + 1) {
        int y = 3 * x;
        cout << y << endl;
    }

    return 0;
}