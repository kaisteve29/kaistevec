#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *createNode(int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node *insert(Node *root, int value) {
  if (root == NULL) {
    Node *newNode = createNode(value);
    root = newNode;
    return root;
  } else {
    if (root->data > value) {
      root->left = insert(root->left, value);
    } else {
      root->right = insert(root->right, value);
    }
    return root;
  }
}

void print(Node *root) {
  if (root != NULL) {
    print(root->left);
    print(root->right);
    cout << root->data << " ";
    
  }
}

int main() {
  Node *root = createNode(1);
  root = insert(root, 3);
  root = insert(root, 2);
  root = insert(root, 6);
  root = insert(root, 5);
  print(root);
  return 0;
}

    //  1   1  3  2  6 5
    // / \
    //    3
    //   / \
    //   2  6
    //     /
    //     5

print(NULL)
print(3)
  + print(2)
    + print(NULL)
    + print(NULL)
    + print(2) -> 2
  + print(6)
    + print(5)
      + print(NULL)
      + print(NULL)
      + print(5) -> 5
    + print(NULL)
    + print(6) -> 6
  + print(3) -> 3

print(1) -> 1
