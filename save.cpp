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

Node* swapNodeinParis(Node* head){
	Node* head1= head;
	Node* curr1= head1;
	Node* head2= head->next;
	Node* curr2= head2;
	Node* temp= head;
	while(temp && temp->next){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= NULL;
		curr1->next= newNode;
		curr1= newNode;
		temp=temp->next->next;
	}
	temp= head->next;
	while(temp && temp->next){
		Node* newNode= new Node();
		newNode->data= temp->data;
		newNode->next= NULL;
		curr2->next= newNode;
		curr2= newNode;
		temp= temp->next->next;
	}
    Node* newHead= head2;
    Node* newCurr= newHead;
    while(head1 || head2){
    	Node* newNode= new Node();
    	newNode->data= head1->data;
    	newNode->next= 	NULL;
    	newCurr->next= newNode;
    	newCurr=newNode;
    	head1= head1->next;
    	
    	Node* newNode1= new Node();
    	newNode1->data= head2->data;
    	newNode1->next= NULL;
    	newCurr->next= newNode1;
    	newCurr= newNode1;
    	head2=head2->next;
	}
	return newHead;
}
int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	head->next->next= createNode(3);
	head->next->next->next= createNode(4);
	head->next->next->next= createNode(5);
	Node* newHead= swapNodeinParis(head);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
