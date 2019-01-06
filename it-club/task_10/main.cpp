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

    // Get coordinates of bishop from user
    int x;
    int y;
    cout << "This program shows available chess movements for bishop" << endl;
    cout << "Tip: enter numbers from 1 to 8 (counting from top-left corner)" << endl;
    cout << "Enter X coordinate: " << endl;
    cin >> x;
    cout << "Enter Y coordinate: " << endl;
    cin >> y;

    // Work in progress
}