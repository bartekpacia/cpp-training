/**
 * Task 10
 * Print the available movements of bishop in chees game for
 * the coordinates entered by the user. Chess board is 8 x 8.
 **/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows = 8;
    int columns = 8;

    int arr[rows][columns] = {0};

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

    // Work in progress
















    cout << "Available movements for rook at (" << row << ", " << column << ")" << endl;
    
    // Print array
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    _getch();
    return 0;
}