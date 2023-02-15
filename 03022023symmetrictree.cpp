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

bool checkSameTree(Node* root1, Node* root2){
	if(root1 == NULL){
		if(root2 == NULL) return true;
		return false;
	}
	if(root2 == NULL && root1 != NULL) return false;
	if(root1->data != root2->data) return false;
	return checkSameTree(root1->left,root2->right) & checkSameTree(root1->right,root2->left);
}

bool checkSymmetricTree(Node* root){
	if(root== NULL) return true;
	Node* root1= root->left;
	Node* root2= root->right;
	if(checkSameTree(root1,root2) == false) return false;
	return true;
}

int main(){
	Node* root= createNode(1);
	root->left= createNode(2);
	root->right= createNode(2);
	root->left->left= createNode(3);
	root->left->right= createNode(4);
	root->right->right= createNode(3);
	root->right->left= createNode(2);
	if(checkSymmetricTree(root)){
		cout << "true";
	}
	else{
		cout << "false";
	}
	return 0;
}
