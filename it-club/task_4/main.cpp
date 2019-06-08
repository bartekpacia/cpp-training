/**
 * Task 4
 * Write a program, which asks user to enter a single character.
 * Then, it prints if it's a vowel or consonant (in Polish language), and
 * asks if it should continue (Y / N).
 **/

#include <iostream>

using namespace std;

int main() {
    char indicator;

    do {
        char c;

        cout << "Enter a char: " << endl;

        cin >> c;
        c = tolower(c);

        if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') ||
            (c == 'u') || (c == 'y')) {
            cout << "It's a vowel" << endl;
        } else
            cout << "It's an consonant" << endl;

        cout << "Do you want to check another character?[Y / N]" << endl;
        cin >> indicator;
        indicator = tolower(indicator);
    } while (indicator == 'y');

    return 0;
}

// I had to put libstdc++-6.dll into this directory, otherwise it was crashing