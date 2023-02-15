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

int countCircleNode(Node* head){
	Node* head1= head;
	Node* head2=head->next;
	while(head1 && head2 && head1!=head2 ){
		head1= head1->next;
		head2= head2->next->next;
		
	}
	int n=1;
	while(head1->next!=head2){
		n+=1;
		head1=head1->next;
	}
	return n;
}

int main(){
	Node* head= createNode(1);
	head->next= createNode(2);
	Node* third= createNode(3);
	head->next->next= third;
	head->next->next->next= createNode(4);
	head->next->next->next->next= createNode(5);
	head->next->next->next->next->next= createNode(6);
	head->next->next->next->next->next->next= createNode(7);
	Node* eighth= createNode(8);
	head->next->next->next->next->next->next->next= eighth;
	eighth->next=third;
	cout<<countCircleNode(head)<< endl;
	return 0;
	
}
