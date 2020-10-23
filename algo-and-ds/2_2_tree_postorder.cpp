#include <iostream>

using namespace std;

struct Node {
  int key;
  Node *left;
  Node *right;
};

void PostOrder(Node *root);

int main() {
  int n;

  Node n3_7{18, nullptr, nullptr};
  Node n2_3{13, nullptr, nullptr};
  Node n2_4{20, nullptr, nullptr};
  Node n2_2{7, nullptr, nullptr};
  Node n1_1{5, nullptr, &n2_2};
  Node n1_2{15, &n2_3, &n2_4};
  Node root{10, &n1_1, &n1_2};

  PostOrder(&root);
}

void PostOrder(Node *root) {
  if (root) {
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->key << endl;
  }
}