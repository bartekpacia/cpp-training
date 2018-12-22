/**
 * Task 5
 * Write a program which taking a single character as input, and 
 * prints if the entered char is a number or a letter.
 **/

#include <iostream>

using namespace std;

int main()
{
    char c;

    do
    {
        cout << "Enter a character. Enter '.' (dot) to exit." << endl;
        cin >> c;
        c = tolower(c);

        if(c == '.')
        {
            return 0;
        }

        if (c >= 'a' && c <= 'z')
        {
            cout << "It's a letter" << endl;
        }
        else
        {
            int charCode = (int)c - '0';

            if (charCode >= 0 && charCode <= 9)
            {
                cout << "It's a number" << endl;
            }
            else
            {
                cout << "Unknown character" << endl;
            }
        }
    } while (c != '.');
}