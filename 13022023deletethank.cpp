#include<iostream>
using namespace std;

struct Node{
 int data;
 Node* left;
 Node* right;
};

Node* createNode(int value){
  Node* newNode = new Node();
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node* insertNode(Node* root, int value){
  if(root == NULL){
    Node* newNode = createNode(value);
    root = newNode;
    return root;
  }
  if(root->data < value){
    root->right = insertNode(root->right,value);
  }
  if(root->data > value){
    root->left = insertNode(root->left,value);
  }
  return root;
}
Node* deleteNodesGreaterThanK(Node *root, int k) {
  if (root == NULL) return root;
  if (root->data == k) return root->left;
  if (root->data > k) {
    return deleteNodesGreaterThanK(root->left, k);
  }

  root->right = deleteNodesGreaterThanK(root->right, k);
  return root;
}

void printTree(Node* root){
  if(root != NULL){
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
  }
}

int main(){
  Node* root = createNode(8);
  root = insertNode(root,5);
  root = insertNode(root,13);
  root = insertNode(root,2);
  root = insertNode(root,7);
  root = insertNode(root,6);
  root = insertNode(root,10);
  root = insertNode(root,9);
  root = insertNode(root,11);
  root = insertNode(root,14);
  printTree(deleteNodesGreaterThanK(root,7));
  return 0;
}
