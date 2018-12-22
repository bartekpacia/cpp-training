/**
 * I got this task on maths test and decided to solve it with C++. Here it goes:
 * Find number(s) smaller than 1000, which
 *-divided by 10 gives the remainder of 9
 *-divided by 15 gives the remainder of 14
 *-divided by 21 gives the remainder of 20
 **/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        if (i % 10 == 9)
        {
            if (i % 15 == 14)
            {
                if (i % 21 == 20)
                {
                    cout << i << " is valid" << endl;
                }
            }
        }
    }

    _getch();

    return 0;
}