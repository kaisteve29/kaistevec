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

Node* deleteMidNode(Node* head,int pos){
	Node* curr=head;
	
    
	int a=1;
	Node* prev= NULL;
	while(a != pos){
		a++;
		prev= curr;
		curr=curr->next;
	}
	prev->next= curr->next;
	return head;
}
int main(){
	Node* head= createNode(29);
	head->next=createNode(07);
	head->next->next=createNode(2001);
	Node* newHead=deleteMidNode(head,2);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
