#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
void printLinkedList(Node*head){

	while(head != NULL){
		cout<< head->data<<" ";
		head=head->next;
	}
}

int main(){
    Node* head= NULL;
    Node* second= NULL;
    Node* third=NULL;
    
    head= new Node();
    second= new Node();
    third= new Node();
    
    head->data=29;
    head->next=second;
    
    second->data=07;
    second->next=third;
    
    third->data=2001;
    third->next=NULL;
    
    printLinkedList(head);
    return 0;
}
