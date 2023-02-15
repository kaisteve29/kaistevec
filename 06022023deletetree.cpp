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

int maxNode(Node* root){
	if(root->right == NULL){
		return root; 
	}
	return maxNode(root->right);
}

Node* insertNode(Node* root,int value){
	if(root == NULL){
		Node* newNode= createNode(value);
		root= newNode;
		return root;
	}
	if(root->data < value){
		root->right= insertNode(root->right,value);
	}
	else{	
		root->left= insertNode(root->left,value);
	}
	return root;
}

Node* deleteNode(Node* root,int value){
	Node* prev= NULL;
	int res= 0;
	Node* curr= searchNode(root,prev,res,value);
	Node* swap= createNode(maxNode(curr->left));
	swap->left= curr->left;
	swap->right= curr->right;
	if(res== 0){
		prev->right= swap;
	}
	else{
		prev->left= swap;
	}
	Node* last= NULL;
	searchNode(root,last,res,swap->data);
	last->right= NULL;
	return root;
}
Node* searchNode(Node* root,Node* &prev,int& res, int value){
	if(root->left != NULL && root->left->data == value){
		prev= root;
		res= 1;
		return root->left;
	}
	if(root->right != NULL && root->right->data == value){
		prev= root;
		res= 0;
		return root->right;
	}
	if(root->data < value){
		 searchNode(root->right,prev,res,value);
	}
	else{
		 searchNode(root->left,prev,res,value);
	}
}
void showNode(Node* root){
	if(root != NULL){
		cout << root->data << " ";
		showNode(root->left);
		showNode(root->right);
	}
}

int main(){
	Node* root= createNode(3);
	root= insertNode(root,2);
	root= insertNode(root,5);
	root= insertNode(root,4);
	root= insertNode(root,8);
	root= insertNode(root,6);
	root= insertNode(root,9); 
	root= insertNode(root,7);
	showNode(root);
	cout << endl;
	Node* prev= NULL;
	int res=0;
	Node* findNode= searchNode(root,prev,res,8);
	cout << findNode->data << endl;
	cout << prev->data << endl;
	cout << res << endl;
	return 0;
}
