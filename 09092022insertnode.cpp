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

Node* insertNode(Node* head,int value){
	Node* newHead= new Node();
	newHead->data= value;
	if(head==NULL){
		head= newHead;
		newHead->next= NULL;
	}
	else{
		newHead->next= head;
		head= newHead;
	}
	return head;
}

int main(){
	Node* head= createNode(29);
	head->next=createNode(07);
	head->next->next=createNode(2001);
	Node* newHead=insertNode(head,21);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
