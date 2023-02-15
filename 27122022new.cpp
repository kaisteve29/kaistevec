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

Node *search(Node *&parent, int &isLeft, Node *root, int value) {
  if (root->left && root->left->data == value) {
    parent = root;
    isLeft = 1;
    return root->left;
  }

  if (root->right && root->right->data == value) {
    parent = root;
    isLeft = 0;
    return root->right;
  }

  if (root->data < value) {
    search(parent, isLeft, root->right, value);
  } else {
    search(parent, isLeft, root->left, value);
  }
}

Node *maxNode(Node *root) {
  if(root->right==NULL){
  	return root;
  }
  else{
  	maxNode(root->right);
  }
}

Node *minNode(Node * root){
	if(root->left==NULL){
		return root;
	}
	else{
		minNode(root->left);
	}
}

Node *deleteNode(Node *root, int value) {
  Node *parent = NULL;
  int isLeft= 1;
  Node *deletedNode = search(parent, isLeft, root, value);
  if(deletedNode->left==NULL && deletedNode->right== NULL){
  	if (isLeft == 1) {
    parent->left = NULL;
  } else {
    parent->right = NULL;
  }
  }
  if(deletedNode->left==NULL && deletedNode->right!=NULL){
  	Node* min= minNode(deletedNode->right);
  	Node* addressMin = search(parent,isLeft,root,min->data);
  	if (isLeft == 1) {
    parent->left = NULL;
  } else {
    parent->right = NULL;
  }
  deletedNode->data= min->data;
  }
  else{
  Node *max = maxNode(deletedNode->left);
  Node *addressMax = search(parent, isLeft, root, max->data);
  if (isLeft == 1) {
    parent->left = NULL;
  } else {
    parent->right = NULL;
  }
  
  deletedNode->data= max->data;
}
  return root;
}
void print(Node *root) {
  if (root != NULL) {
    print(root->left);
    print(root->right);
    cout << root->data << " ";
  }
}
int main() {
  Node *root = createNode(5);
  root = insert(root, 3);
  root = insert(root, 9);
  root = insert(root, 1);
  root = insert(root, 4);
  root = insert(root, 7);
  root = insert(root, 8);
  root = insert(root, 6);
  root = insert(root, 11);
  root = insert(root, 12);
  Node *delet = deleteNode(root, 12);
  print(delet);
  return 0;
}
