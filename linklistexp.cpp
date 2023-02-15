#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void printLinkedList(Node*head){
	if(head == NULL) return ;
	while(head != NULL){
		cout << head->data << " ";
		head=head->next;
	}
	
}
int main(){
	Node* head= NULL;
	Node* second= NULL;
	Node* third= NULL;
	Node* fourth= NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	
	head->data=29;
	head->next= second;
	
	second->data=07;
	second->next= third;
	
	third->data=2001;
	third->next= fourth;
	
	fourth->data=206020;
	fourth->next=NULL;
	
	printLinkedList(head);
	return 0;
}
