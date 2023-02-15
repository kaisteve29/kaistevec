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

bool checkBinaryTree(Node* root){
	if(root== NULL) return true;
	if(root->left != NULL){
		if(root->left->data > root->data) return false;
	}
	if(root->right != NULL){
		if(root->right->data < root->data) return false;
	}
	return checkBinaryTree(root->left) & checkBinaryTree(root->right);
}

int main(){
	Node* root= createNode(7);
	root->left= createNode(6);
	root->right= createNode(9);
	root->left->left= createNode(2);
	root->left->right= createNode(8);
	if(checkBinaryTree(root)== true){
		cout << "true" ;
	}
	else{
		cout << "false";
	}
	return 0;
}
