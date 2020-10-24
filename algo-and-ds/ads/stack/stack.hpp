template <class T>
class Stack {
 public:
  Stack();
  bool isEmpty();
  void Push(T);
  T Pop();

 private:
  struct Node {
    T value;
    Node* next;

    Node(T _value, Node* _next);
  };

  Node* head;
};