/**
 * Task 2
 * Calculate the sum of the numbers from 1 to 100.
 **/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum = sum + i;
    }

    cout << "Sum: " << sum << endl;

    _getch();

    return 0;
}