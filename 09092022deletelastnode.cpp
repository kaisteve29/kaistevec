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

Node* deleteLastNode(Node* head){
	Node* curr= head;
	
	Node* prev= NULL;
	while(curr->next!=NULL){
		prev= curr;
		curr= curr->next;
	}
	prev->next= curr->next;
	return head;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
    Node* newHead= deleteLastNode(head);
    while(newHead){
    	cout<< newHead->data << " ";
    	newHead= newHead->next;
	}
	return 0;
}

