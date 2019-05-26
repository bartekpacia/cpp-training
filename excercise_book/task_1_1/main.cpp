/**
 * Task 1.1
 * Write a program calculating area of the rectangle. The
 * values of sides a and b are float, so is the area. Display
 * the result with precision of two decimal places.
 **/
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    float a, b, area;

    cout << "Enter side a" << endl;
    cin >> a;
    cout << "Enter side b" << endl;
    cin >> b;

    cout << fixed;
    cout << setprecision(2);
    area = a * b;
    cout << "Area of this rectangle is " << area << endl;

    getchar();

    return 0;
}