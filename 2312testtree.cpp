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

Node* search(Node* root,int value){
	if(root==NULL || root->data== value){
		return root;
	}
	if(root->data > value) return search(root->left,value);
	return search(root->right,value);
}
void showNode(Node* root){
	if(root!=NULL){
		cout << root->data << " ";
		showNode(root->right);
		showNode(root->left);
    }
}

void insert(Node* root,int value){
	if(root==NULL){
		Node* newNode= new Node();
		newNode->data= value;
		newNode->right= NULL;
		newNode->left= NULL;
	    root= newNode;
	}
	else{
		if(root->data > value){
			insert(root->left,value);
		}
		insert(root->right,value);
	}
}
int main(){
	Node* root= createNode(1);
	root->right= createNode(2);
	root->right->right= createNode(3);
	root->right->right->right= createNode(4);
	Node* head= search(root,3);
	showNode(root);
	cout << endl;
    insert(root,7);
    showNode(root);
    cout << endl;
    return 0;
}
