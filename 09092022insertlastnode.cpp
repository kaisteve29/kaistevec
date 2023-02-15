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

Node* insertLastNode(Node* head, int value){
	Node* curr= head;
	while(curr->next){
		curr= curr->next;
	}
	Node* temp= createNode(value);
    if(head==NULL){
    	head= temp;
	}
	else{
        curr->next= temp;
	}
	return head;
}
int main(){
	Node* head= createNode(29);
	head->next=createNode(07);
	head->next->next=createNode(2001);
	Node* newHead=insertLastNode(head,21);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
