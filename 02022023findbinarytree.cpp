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
		if(root->left->data > root->data ) return false;
	}
	if(root->right != NULL){
		if(root->right->data < root->data ) return false;
	}
	
	return checkBinaryTree(root->left) & checkBinaryTree(root->right);
}

int calLength(Node* root){
	if(root==NULL) return 0;
	return 1 + calLength(root->left) + calLength(root->right);
}

int countBinaryTree(Node* root){
	if(root== NULL) return 0;
	if(checkBinaryTree(root)== true) return calLength(root);
		int resLeft= countBinaryTree(root->left);
		int resRight= countBinaryTree(root->right);
		return resLeft > resRight ? resLeft : resRight ;
}

int main(){
	Node* root= createNode(4);
	root->left= createNode(6);
	root->right= createNode(3);
	root->left->left= createNode(2);
	root->left->right= createNode(8);
	cout << countBinaryTree(root) << endl;
	return 0;
}
