#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void printLinkedList(Node* head){
	while(head != NULL){
		cout<<head->data<< " ";
		head=head->next;
	}
}

int main(){
	Node* head;
	Node* second;
	Node* third;
	
	head= new Node();
	second= new Node();
	third= new Node();
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printLinkedList(head);
	return 0;
}
