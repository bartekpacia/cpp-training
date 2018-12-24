/**
 * Task 9
 * Print the available movements of the tower in chees game for
 * the coordinates entered by the user. Chess board is 8 x 8.
 **/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows = 8;
    int colums = 8;

    int arr[rows][colums] = {0};

    // Clean array - put 0 everywhere
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            arr[i][j] = 0;
        }
    }

    // Get coordinates of tower from user
    int x;
    int y;
    cout << "Tip: enter numbers from 1 to 8" << endl;
    cout << "Enter X coordinate: " << endl;
    cin >> x;
    cout << "Enter Y coordinate: " << endl;
    cin >> y;

    x -= 1;
    y -= 1;

    arr[x][y] = 1;

    // Calculate movements for X axis
    for (int i = 0; i < rows; i++)
    {
        if (i == x)
        {
            continue;
        }
        arr[i][y] = 7;
    }

    // Calculate movements for Y axis
    for (int i = 01; i < colums; i++)
    {
        if (i == y)
        {
            continue;
        }
        arr[x][i] = 7;
    }

    cout << "Available movements for tower at (" << x << ", " << y << ")" << endl;
    
    // Print array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    _getch();
    return 0;
}