#include "stack.hpp"

#include <iostream>

template <class T>
Stack<T>::Stack() {
  head = NULL;
}

template <class T>
bool Stack<T>::isEmpty() {
  return head == NULL;
}

template <class T>
void Stack<T>::Push(T newValue) {
  head = new Node(newValue, head);
}

template <class T>
T Stack<T>::Pop() {
  T value = head->value;
  Node* oldHead = head;
  head = head->next;
  delete oldHead;
  return value;
}

template <class T>
Stack<T>::Node::Node(T _value, Stack<T>::Node* _next) {
  value = _value;
  next = _next;
}