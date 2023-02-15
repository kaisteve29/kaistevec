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

int countTree(Node* root){
	if(root == NULL) return 0;
	return 1 + countTree(root->left) + countTree(root->right);
}

Node* searchNode(Node* root, int value){
	if(root == NULL || root->data == value){
		return root;
	}
	if(root->data < value){
		return searchNode(root->right,value);
	}
	if(root->data > value){
		return searchNode(root->left,value);
	}
}

void arrayTree(Node* root,int arr[]){
	if(root != NULL){
		arrayTree(root->left,arr);
		arr[0] = root->data;
		arrayTree(root->right,arr);
	}
}

int main(){
	Node* root = createNode(1);
	root->left = createNode(3);
	root->left->right = createNode(2);
	cout << countTree(root) << endl;
	int arr[countTree(root)];
	arrayTree(root,arr);
    cout << arr[0] << endl;
	return 0;
}
