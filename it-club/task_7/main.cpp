/**
 * Task 7
 * Write a program, which takes a single sentence as input,
 * counts the number of the letters in it and prints the result
 * to the user.
 **/

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string sentence;
    int arr[256] = {0};
    for(int i = 0; i < 256; i++){
        arr[i] = 0;
    }

    cout << "Enter a sentence. Don't use uppercase letters. " << endl;
    getline(cin, sentence);

    for(int i = 0; i < sentence.length(); i++){

        char index = sentence[i];
        arr[index]++;
    }

    for(int i = 0; i < 256; i++){
        if(arr[i] != 0){

                if(i == 32){
                    cout << "Space" << arr[i] << endl;
                }
                else {
                    cout << (char)i << ": " << arr[i] << endl;
                }
        }
    }

    _getch();

    return 0;
}
