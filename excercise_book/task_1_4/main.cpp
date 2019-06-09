/**
 * Task 1.4
 * Write a program which calculates the volume
 * of the ball with the radius of r.
 * Display the result with the precision of 2 decimal places.
 */

#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double r, V = 0;

    cout << "Enter radius of the ball: " << endl;
    cin >> r;

    V = M_PI * r * r * r * 4 / 3;

    cout << "Volume of this ball is: " << fixed << setprecision(2) << V << endl;

    getchar();

    return 0;
}
