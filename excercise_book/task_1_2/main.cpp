/**
 * Task 1.2
 * Write a program which displays the value of the
 * predefined constant pi (3.14) with the precision of
 * 5 decimal places.
 **/

#include <iomanip>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
    cout << fixed;
    cout << setprecision(5);
    cout << fixed << setprecision(5) << "Pi: " << M_PI << endl;

    getchar();

    return 0;
}