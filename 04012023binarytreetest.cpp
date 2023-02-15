#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data= value;
	newNode->left= NULL;
	newNode->right= NULL;
	return newNode;
}

Node* searchNode(Node* root,int value){
	if(root==NULL || root->data== value){
		return root;
	}
	if(root->data> value){
		searchNode(root->left,value);
	}
	else{
		searchNode(root->right,value);
	}
}

void showNode(Node* root){
	if(root!= NULL){
		showNode(root->left);
		showNode(root->right);
		cout << root->data << " ";
	}
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

int main(){
Node *root = createNode(5);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 4);
  root = insert(root, 7);
  root = insert(root, 8);
  root = insert(root, 6);
  root = insert(root, 11);
  root = insert(root, 10);
  showNode(root);
  return 0;
}
