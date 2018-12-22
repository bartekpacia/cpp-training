/**
 * Task 8
 * Print the 12x8 table of zeros.
 **/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows = 8;
    int colums = 12;

    int arr[rows][colums] = {0};

    // Clean array - put 0 everywhere
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums; j++){
            arr[i][j] = 0;
        }
    }

    //Print array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    _getch();
    return 0;
}
