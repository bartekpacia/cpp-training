/**
 * Task 6
 * Write a program which takes some numbers as the input and prints the lowest
 * and the highest number.
 **/

#include <iostream>

using namespace std;

int main() {
    int number, min, max;
    cout << "Enter numbers. Enter 0 to calculate." << endl;
    cin >> number;
    min = number;
    max = number;

    while (number != 0) {
        cin >> number;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    cout << "Largest number:" << max << endl;
    cout << "Smallest number: " << min << endl;

    getchar();
}
