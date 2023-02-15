#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *createNode(int value) {
  Node *newNode = new Node;
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node *search(Node *root, int key) {
  if (root == NULL || root->data == key)
    return root;
  if (root->data > key)
    return search(root->left, key);
  return search(root->right, key);
}

Node *insert(Node *root, int key) {
  Node *temp = root;
  while (temp->left == NULL || temp->right == NULL) {
    if (temp->data < key) {
      temp = temp->right;
    } else {
      temp = temp->left;
    }
  }
  Node *last = createNode(key);
  if (temp->data < key) {
    temp->right = last;
  } else {
    temp->left = last;
  }
  return root;
}
void showNode(Node *root) {
  if (root != NULL) {
    cout << root->data << " ";
    showNode(root->left);
    showNode(root->right);
  }
}
int main() {
  Node *root = createNode(3);
  root->right = createNode(4);
  root->left = createNode(1);
  root->left->right = createNode(2);
  root->left->right->right = createNode(5);
   Node *head = search(root, 2);
  Node* headd= insert(root,6);
   
  showNode(root);
  return 0;
}

