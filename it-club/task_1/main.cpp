/**
 * Task 1
 * Print "o" 8 times using while, do-while and for loop.
 **/

#include <iostream>

using namespace std;

void byWhile()
{
    cout << "Using while:" << endl;

    int i = 0;
    while(i < 8){
        cout << "o" << endl;
        i++;
    }
}

void byDoWhile(){
    cout << "Using do-while:" << endl;

    int i = 0;
    do{
        cout << "o" << endl;
        i++;
    }
    while(i < 8);
}

void byFor()
{
    cout << "Using for:" << endl;

    for(int i = 0; i < 8; i++){
        cout << "o" << endl;
    }
}

int main(){
    byWhile();
    byDoWhile();
    byFor();

    return 0;
}