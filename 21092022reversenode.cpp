#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* createNode(int value){
	Node* newNode= new Node();
	newNode->data= value;
	newNode->next= NULL;
	return newNode;
}

Node* reverseNode(Node* head){
	Node* newHead= NULL;
	Node* curr= head;
	while(curr){
		Node* newNode= new Node();
		newNode->data=curr->data;
		newNode->next= newHead;
		newHead= newNode;
		curr=curr->next;
	}
	return newHead;
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	Node* newHead=reverseNode(head);
	while(newHead){
		cout << newHead->data<< " ";
		newHead= newHead->next;
	}
	return 0;
}
