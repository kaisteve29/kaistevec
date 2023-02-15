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

int main(){
	Node* head1= createNode(1);
	head1->next= createNode(2);
	head1->next->next= createNode(3);

	
	Node* head2= createNode(1);
	head2->next= createNode(4);
	head2->next->next= createNode(5);
	
	Node* curr1=head1;
	
	while(curr1->next){
		curr1=curr1->next;
	}
	curr1->next= head2;
	curr1=head1;
	while(curr1){
		cout<< curr1->data << " ";
		curr1=curr1->next;
	}
	return 0;
}
