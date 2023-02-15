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

Node* insertNode(Node* root, int value){
	if(root== NULL){
		Node* newNode= createNode(value);
		root= newNode;
		return root;
	}
	else{
	if(root->data < value){
		root->right = insertNode(root->right,value);
	}
	else{
		root->left = insertNode(root->left,value);
	}
	return root;
    }
}

void showNode(Node* root){
	if(root!= NULL){
		showNode(root->right);
		cout << root->data<< " ";
		showNode(root->left);
	}
}

int main(){
	Node* root= createNode(2);
	insertNode(root,4);
	insertNode(root,1);
	insertNode(root,3);
	showNode(root);
	return 0;
}
