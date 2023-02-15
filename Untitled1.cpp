#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void showNode(Node* root, Node* firstNode, Node* secondNode){
	if(root != NULL){
		showNode(root->left);
	    
		showNode(root->right);
	}
}
