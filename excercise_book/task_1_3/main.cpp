/**
 * Task 1.3
 * Write a program which displays the square root
 * of pi.
 */

#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float pi = M_PI;

    cout << fixed << setprecision(2) << sqrt(pi) << endl;

    return 0;
}
