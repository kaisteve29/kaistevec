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

bool checkMaxHeapTree(Node* root){
  if(root == NULL) return true;
  if(root->left != NULL){
    if(root->left->data < root->data) return false;
  }
  if(root->right != NULL){
    if(root->right->data < root->data) return false;
  }

  return checkMaxHeapTree(root->left) & checkMaxHeapTree(root->right);
}

int main(){
  Node* root = createNode(3);
  root->left = createNode(4);
  root->right = createNode(2);
  if(checkMaxHeapTree(root)){
    cout << "true" << endl;
  }
  else{
    cout << "false" << endl;
  }
  return 0;
}
