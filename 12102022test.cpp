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

Node* makeTwoList(Node* head1,Node* head2){
    while(head1)
}

int main(){
	Node* head1= createNode(1);
	head1->next= createNode(3);
	head1->next->next= createNode(5);
	head1->next->next->next= createNode(7);
	
	Node* head2= createNode(2);
	head2->next= createNode(4);
	head2->next->next= createNode(6);
	
	Node* newHead= mergeTwolist(head1,head2);
	while(newHead){
		cout<< newHead->data << " ";
		newHead= newHead->next;
	}
	return 0;
}
