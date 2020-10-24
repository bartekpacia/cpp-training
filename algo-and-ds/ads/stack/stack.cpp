#include "stack.hpp"

#include <iostream>

template <class T>
class Stack {
 private:
  struct Node {
    T value;
    Node next;

    Node(T _value, Node* _next) {
      value = _value;
      next = _next;
    };
  };

  Node* head;

 public:
  Stack() { head = NULL; };

  bool isEmpty() { return head == NULL; }

  void Push(T newValue) { head = new Node(newValue, head); }

  T Pop() {
    T value = head->value;
    Node* oldHead = head;
    head = head->next;
    delete oldHead;
    return value;
  }
};