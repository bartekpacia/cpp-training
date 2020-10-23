#include <iostream>

using namespace std;

void Hanoi(int n, char from, char to, char usin);

int main() {
  int n;

  cout << "enter the number of disks: ";
  cin >> n;
  cout << endl;

  Hanoi(n, 'a', 'c', 'b');

  return 0;
}

void Hanoi(int n, char from, char to, char usin) {
  if (n == 1) {
    cout << from << " --> " << to << endl;
  } else {
    Hanoi(n - 1, from, usin, to);
    cout << from << " --> " << to << endl;
    Hanoi(n - 1, usin, to, from);
  }
}