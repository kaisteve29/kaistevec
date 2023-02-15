#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* createNode(int value){
	Node* newNode= new Node;
	newNode->data= value;
	newNode->next= NULL;
	return newNode;
}

Node* swapNodeinParis(Node* head){
	int n=0;
	Node* temp= head;
	while(temp){
		n++;
		temp= temp->next;
	}
	int arr[n];
	temp= head;
	int a=0;
	while(temp){
		arr[a]= temp->data;
		a++;
		temp=temp->next;
	}
	1 2 3 4 5 6 7
}
