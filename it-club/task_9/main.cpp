/**
 * Task 9
 * Print the available movements of rook in chees game for
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

    // Get coordinates of rook from user
    int x;
    int y;
    cout << "This program shows available chess movements for rook" << endl;
    cout << "Tip: enter numbers from 0 to 7 (counting from top-left corner)" << endl;
    cout << "Enter X coordinate: " << endl;
    cin >> x;
    cout << "Enter Y coordinate: " << endl;
    cin >> y;

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
    for (int i = 0; i < colums; i++)
    {
        if (i == y)
        {
            continue;
        }
        arr[x][i] = 7;
    }

    cout << "Available movements for rook at (" << x << ", " << y << ")" << endl;
    
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