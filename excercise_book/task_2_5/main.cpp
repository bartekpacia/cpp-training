#include <iostream>
#include <random>

/**
 * I didn't do a task, I was just making fun XD.
 */

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist (1, 160);

    int iq = dist(gen);

    cout << "IQ Oli to " << iq << endl;
    return 0;
}