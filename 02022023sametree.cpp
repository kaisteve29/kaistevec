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
	return checkSameTree(root1->left,root2->left) & checkSameTree(root1->right,root2->right);
}

int main(){
	Node* root1= createNode(2);
	root1->left= createNode(1);

	
    Node* root2= createNode(2);
	root2->right= createNode(1);
	
	if(checkSameTree(root1,root2)){
		cout << "true" ;
	}
	else{
		cout << "false" ;
	}
	return 0;
}
