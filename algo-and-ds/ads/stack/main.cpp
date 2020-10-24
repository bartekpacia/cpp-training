#include <iostream>

#include "stack.hpp"

using namespace std;

template class Stack<int>;

int main() {
  Stack<int>* stack = new Stack<int>();

  stack->Push(1);
  stack->Push(2);
  stack->Push(3);

  while (!stack->isEmpty()) {
    int popped = stack->Pop();
    cout << popped << endl;
  }

  return 0;
}