/**
 * Task 1.2
 * Write a program which displays the value of the
 * predefined constant pi (3.14) with the precision of
 * 5 decimal places.
 **/

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>

using namespace std;

int main() {
    
    cout << fixed;
    cout << setprecision(5);
    cout << fixed << setprecision(5) << "Pi: " << M_PI << endl;

    _getch();

    return 0;
}