/**
 * Task 3
 * Create a simulation of a simple user interface (UI) using do-while loop
 **/

#include <iostream>

using namespace std;

int main() {
    int i = 0;  // Main menu
    int selected = 0;

    do {
        cout << "Enter 1 to play" << endl;
        cout << "Enter 2 to see all levels" << endl;
        cout << "Enter 3 to exit" << endl;
        cin >> selected;

        switch (selected) {
            case 1: {
                cout << "Starting..." << endl;
                break;
            }

            case 2: {
                cout << "Displaying levels..." << endl;
                break;
            }

            case 3: {
                cout << "Bye bye! :)" << endl;
                return 01;
            }

            default: {
                cout << "Can't you read, you fool?! Enter a correct number!"
                     << endl;
            }
        }

    } while (1 > 0);
}