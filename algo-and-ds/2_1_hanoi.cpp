#include <iostream>

using namespace std;

void hanoi(int n, char from, char to, char usin);

int main() {
  int n;

  cout << "enter the number of disks: ";
  cin >> n;
  cout << endl;

  hanoi(n, 'a', 'c', 'b');

  return 0;
}

void hanoi(int n, char from, char to, char usin) {
  if (n == 1) {
    cout << from << " --> " << to << endl;
  } else {
    hanoi(n - 1, from, usin, to);
    cout << from << " --> " << to << endl;
    hanoi(n - 1, usin, to, from);
  }
}