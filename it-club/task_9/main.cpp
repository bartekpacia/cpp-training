/**
 * Task 9
 * Print the available movements of rook in chees game for
 * the coordinates entered by the user. Chess board is 8 row 8.
 **/

#include <iostream>

using namespace std;

int main()
{
    int rows = 8;
    int columns = 8;

    int arr[rows][columns];

    // Clean array - put 0 everywhere
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = 0;
        }
    }

    // Get coordinates of rook from user
    int row;
    int column;
    cout << "This program shows available chess movements for rook" << endl;
    cout << "Tip: enter numbers from 0 to 7 (counting from top-left corner)" << endl;
    cout << "Enter X coordinate: " << endl;
    cin >> column;
    cout << "Enter Y coordinate: " << endl;
    cin >> row;

    arr[row][column] = 1;

    // Calculate movements for X axis
    for (int i = 0; i < columns; i++)
    {
        if (i == column)
        {
            continue;
        }
        arr[row][i] = 7;
    }

    // Calculate movements for Y axis
    for (int i = 0; i < rows; i++)
    {
        if (i == row)
        {
            continue;
        }
        arr[i][column] = 7;
    }

    cout << "Available movements for rook at (" << column << ", " << row << ")" << endl;
    
    // Print array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getchar();
    return 0;
}